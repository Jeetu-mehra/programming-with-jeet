#include <bits/stdc++.h>
using namespace std;

struct State {
    int g, b, boat; // girls_left, boys_left, boat_position
};

int exploredStates = 0;

// Check if state is valid
bool isValid(State s) {
    int g_left = s.g;
    int b_left = s.b;
    int g_right = 3 - g_left;
    int b_right = 3 - b_left;

    if (g_left < 0 || g_left > 3 || b_left < 0 || b_left > 3)
        return false;

    if ((g_left > 0 && g_left < b_left) ||
        (g_right > 0 && g_right < b_right))
        return false;

    return true;
}

// Check goal state
bool isGoal(State s) {
    return (s.g == 0 && s.b == 0 && s.boat == 1);
}

// Generate next possible states
vector<State> getNextStates(State s) {
    vector<State> next;

    vector<pair<int,int>> moves = {
        {1,0}, {2,0}, {0,1}, {0,2}, {1,1}
    };

    for (auto move : moves) {
        State temp = s;

        if (s.boat == 0) { // boat on left
            temp.g -= move.first;
            temp.b -= move.second;
            temp.boat = 1;
        } else { // boat on right
            temp.g += move.first;
            temp.b += move.second;
            temp.boat = 0;
        }

        if (isValid(temp))
            next.push_back(temp);
    }

    return next;
}

void printState(State s) {
    cout << "(" << s.g << "," << s.b << "," << s.boat << ")";
}

// ------------------- DLS -------------------

bool DLS(State current, int depth, int limit, 
         vector<State>& path, set<string>& visited) {

    exploredStates++;

    path.push_back(current);

    if (isGoal(current))
        return true;

    if (depth == limit) {
        path.pop_back();
        return false;
    }

    string key = to_string(current.g) + to_string(current.b) + to_string(current.boat);
    visited.insert(key);

    for (State next : getNextStates(current)) {
        string nextKey = to_string(next.g) + to_string(next.b) + to_string(next.boat);
        if (visited.find(nextKey) == visited.end()) {
            if (DLS(next, depth + 1, limit, path, visited))
                return true;
        }
    }

    path.pop_back();
    return false;
}

// ------------------- IDS -------------------

bool IDS(State start, int maxDepth) {

    for (int depth = 0; depth <= maxDepth; depth++) {

        exploredStates = 0;
        vector<State> path;
        set<string> visited;

        cout << "\nTrying depth limit: " << depth << endl;

        if (DLS(start, 0, depth, path, visited)) {
            cout << "\nSolution Found at depth " << depth << endl;
            cout << "Path:\n";
            for (State s : path) {
                printState(s);
                cout << " -> ";
            }
            cout << "END\n";
            cout << "Explored States: " << exploredStates << endl;
            return true;
        }

        cout << "Explored States: " << exploredStates << endl;
    }

    return false;
}

// ------------------- MAIN -------------------

int main() {

    State start = {3,3,0};

    cout << "===== Depth Limited Search (limit = 3) =====\n";
    exploredStates = 0;
    vector<State> path;
    set<string> visited;

    if (DLS(start, 0, 3, path, visited)) {
        cout << "Solution Found!\n";
        for (State s : path) {
            printState(s);
            cout << " -> ";
        }
        cout << "END\n";
    } else {
        cout << "No Solution within depth 3\n";
    }

    cout << "Explored States: " << exploredStates << endl;


    cout << "\n\n===== Iterative Deepening Search =====\n";
    IDS(start, 15);

    return 0;
}