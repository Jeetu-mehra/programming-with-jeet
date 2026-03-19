#include <iostream>
#include <limits.h>
using namespace std;

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Print board
void printBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

// Check winner
char checkWinner() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];

    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    return ' ';
}

// Check moves left
bool isMovesLeft() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return true;
    return false;
}

// Minimax
int minimax(bool isMax) {
    char winner = checkWinner();

    if (winner == 'X') return 1;
    if (winner == 'O') return -1;
    if (!isMovesLeft()) return 0;

    if (isMax) {
        int best = INT_MIN;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == ' ') {
                    board[i][j] = 'X';
                    best = max(best, minimax(false));
                    board[i][j] = ' ';
                }
        return best;
    } else {
        int best = INT_MAX;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';
                    best = min(best, minimax(true));
                    board[i][j] = ' ';
                }
        return best;
    }
}

// Find best move
pair<int,int> findBestMove(bool isMax) {
    int bestVal = isMax ? INT_MIN : INT_MAX;
    pair<int,int> bestMove = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = isMax ? 'X' : 'O';
                int moveVal = minimax(!isMax);
                board[i][j] = ' ';

                if (isMax && moveVal > bestVal) {
                    bestVal = moveVal;
                    bestMove = {i, j};
                }
                if (!isMax && moveVal < bestVal) {
                    bestVal = moveVal;
                    bestMove = {i, j};
                }
            }
        }
    }
    return bestMove;
}

// Play game correctly
void playGame() {
    bool isMax = true; // X starts

    cout << "Initial Board:\n";
    printBoard();

    while (true) {
        pair<int,int> move = findBestMove(isMax);

        // If no move possible → break
        if (move.first == -1) break;

        // Apply move
        board[move.first][move.second] = isMax ? 'X' : 'O';

        cout << "\nMove: " << (isMax ? "X" : "O")
             << " -> (" << move.first << "," << move.second << ")\n";
        printBoard();

        //  CHECK WINNER IMMEDIATELY
        char winner = checkWinner();
        if (winner == 'X') {
            cout << "\n Final Result: X WINS\n";
            return;
        }
        if (winner == 'O') {
            cout << "\n Final Result: O WINS\n";
            return;
        }

        //  ONLY CHECK DRAW IF NO WINNER
        if (!isMovesLeft()) {
            cout << "\n Final Result: DRAW\n";
            return;
        }

        // Switch player
        isMax = !isMax;
    }
}

int main() {
    playGame();
    return 0;
}