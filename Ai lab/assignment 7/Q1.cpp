#include <bits/stdc++.h>
using namespace std;

const int N = 8;
const int MAX_STEPS = 1000;

// ----------------------
// Utility Functions
// ----------------------

int heuristic(vector<int> board) {
    int attacks = 0;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(board[i] == board[j] || 
               abs(board[i] - board[j]) == abs(i - j))
                attacks++;
        }
    }
    return attacks;
}

vector<int> randomBoard() {
    vector<int> board(N);
    for(int i = 0; i < N; i++)
        board[i] = rand() % N;
    return board;
}

vector<vector<int>> getNeighbors(vector<int> board) {
    vector<vector<int>> neighbors;
    for(int col = 0; col < N; col++) {
        for(int row = 0; row < N; row++) {
            if(row != board[col]) {
                vector<int> temp = board;
                temp[col] = row;
                neighbors.push_back(temp);
            }
        }
    }
    return neighbors;
}

// ----------------------
// 1. Steepest Ascent
// ----------------------

void steepestAscent(int run) {
    vector<int> board = randomBoard();
    int initialH = heuristic(board);
    int steps = 0;

    while(steps < MAX_STEPS) {
        int currentH = heuristic(board);
        auto neighbors = getNeighbors(board);

        int bestH = currentH;
        vector<int> bestBoard = board;

        for(auto n : neighbors) {
            int h = heuristic(n);
            if(h < bestH) {
                bestH = h;
                bestBoard = n;
            }
        }

        if(bestH >= currentH) break;

        board = bestBoard;
        steps++;
    }

    int finalH = heuristic(board);

    cout << "Run " << run << " | Initial: " << initialH
         << " | Final: " << finalH
         << " | Steps: " << steps
         << " | Status: " << (finalH == 0 ? "Solved" : "Fail (Local Min)") 
         << endl;
}

// ----------------------
// 2. First Choice
// ----------------------

void firstChoice(int run) {
    vector<int> board = randomBoard();
    int initialH = heuristic(board);
    int steps = 0;

    while(steps < MAX_STEPS) {
        int currentH = heuristic(board);
        bool improved = false;

        for(int i = 0; i < 100; i++) {
            int col = rand() % N;
            int row = rand() % N;

            if(row != board[col]) {
                vector<int> temp = board;
                temp[col] = row;

                if(heuristic(temp) < currentH) {
                    board = temp;
                    improved = true;
                    break;
                }
            }
        }

        if(!improved) break;
        steps++;
    }

    int finalH = heuristic(board);

    cout << "Run " << run << " | Initial: " << initialH
         << " | Final: " << finalH
         << " | Steps: " << steps
         << " | Status: " << (finalH == 0 ? "Solved" : "Fail")
         << endl;
}

// ----------------------
// 3. Random Restart
// ----------------------

void randomRestart(int run) {
    int restarts = 0;
    int totalSteps = 0;

    while(restarts < 50) {
        vector<int> board = randomBoard();
        int steps = 0;

        while(steps < MAX_STEPS) {
            int currentH = heuristic(board);
            auto neighbors = getNeighbors(board);

            int bestH = currentH;
            vector<int> bestBoard = board;

            for(auto n : neighbors) {
                int h = heuristic(n);
                if(h < bestH) {
                    bestH = h;
                    bestBoard = n;
                }
            }

            if(bestH >= currentH) break;

            board = bestBoard;
            steps++;
        }

        totalSteps += steps;

        if(heuristic(board) == 0) {
            cout << "Run " << run << " | Solved after "
                 << restarts << " restarts | Steps: "
                 << totalSteps << endl;
            return;
        }

        restarts++;
    }

    cout << "Run " << run << " | Failed after 50 restarts\n";
}

// ----------------------
// 4. Simulated Annealing
// ----------------------

void simulatedAnnealing(int run) {
    vector<int> board = randomBoard();
    int initialH = heuristic(board);
    double T = 100.0;
    double cooling = 0.95;
    int steps = 0;

    while(T > 0.1 && steps < MAX_STEPS) {
        int currentH = heuristic(board);

        int col = rand() % N;
        int row = rand() % N;

        vector<int> next = board;
        next[col] = row;

        int nextH = heuristic(next);
        int delta = nextH - currentH;

        if(delta < 0) {
            board = next;
        } else {
            double prob = exp(-delta / T);
            if(((double)rand() / RAND_MAX) < prob)
                board = next;
        }

        T *= cooling;
        steps++;
    }

    int finalH = heuristic(board);

    cout << "Run " << run << " | Initial: " << initialH
         << " | Final: " << finalH
         << " | Steps: " << steps
         << " | Status: " << (finalH == 0 ? "Solved" : "Fail")
         << endl;
}

// ----------------------
// Main
// ----------------------

int main() {
    srand(time(0));

    cout << "----- Steepest Ascent (50 Runs) -----\n";
    for(int i = 1; i <= 50; i++)
        steepestAscent(i);

    cout << "\n----- First Choice (50 Runs) -----\n";
    for(int i = 1; i <= 50; i++)
        firstChoice(i);

    cout << "\n----- Random Restart (50 Runs) -----\n";
    for(int i = 1; i <= 50; i++)
        randomRestart(i);

    cout << "\n----- Simulated Annealing (50 Runs) -----\n";
    for(int i = 1; i <= 50; i++)
        simulatedAnnealing(i);

    return 0;
}