#include <iostream>
#include <limits.h>
using namespace std;

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

int nodes_minimax = 0;
int nodes_ab = 0;

// Print board
void printBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++)
            cout << board[i][j] << " | ";
        cout << "\n-------------\n";
    }
}

// Winner check
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

// Moves left
bool isMovesLeft() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return true;
    return false;
}

// ---------- MINIMAX ----------
int minimax(bool isMax) {
    nodes_minimax++;

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

// ---------- ALPHA-BETA ----------
int alphabeta(bool isMax, int alpha, int beta) {
    nodes_ab++;

    char winner = checkWinner();
    if (winner == 'X') return 1;
    if (winner == 'O') return -1;
    if (!isMovesLeft()) return 0;

    if (isMax) {
        int best = INT_MIN;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'X';

                    int val = alphabeta(false, alpha, beta);

                    board[i][j] = ' ';
                    best = max(best, val);
                    alpha = max(alpha, best);

                    //  PRUNING CONDITION
                    if (beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    } else {
        int best = INT_MAX;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';

                    int val = alphabeta(true, alpha, beta);

                    board[i][j] = ' ';
                    best = min(best, val);
                    beta = min(beta, best);

                    //  PRUNING
                    if (beta <= alpha)
                        return best;
                }
            }
        }
        return best;
    }
}

int main() {
    cout << "Running Minimax...\n";
    minimax(true);

    cout << "Running Alpha-Beta...\n";
    alphabeta(true, INT_MIN, INT_MAX);

    cout << "\n===== COMPARISON =====\n";
    cout << "Minimax Nodes Explored: " << nodes_minimax << endl;
    cout << "Alpha-Beta Nodes Explored: " << nodes_ab << endl;

    return 0;
}