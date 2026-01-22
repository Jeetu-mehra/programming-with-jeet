#include <bits/stdc++.h>
using namespace std;

// Function to check if the puzzle is solvable
bool isSolvable(string s) {
    int inv = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (s[i] != '0' && s[j] != '0' && s[i] > s[j])
                inv++;
        }
    }
    return (inv % 2 == 0);
}

int bfs(string start, string goal) {
    queue<string> q;
    unordered_set<string> visited;

    q.push(start);
    visited.insert(start);

    int statesExplored = 0;

    // Possible moves of blank (0): up, down, left, right
    vector<vector<int>> moves = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}
    };

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        statesExplored++;

        if (curr == goal) {
            // states explored before reaching goal
            return statesExplored - 1;
        }

        int zeroPos = curr.find('0');
        int x = zeroPos / 3;
        int y = zeroPos % 3;

        for (auto move : moves) {
            int nx = x + move[0];
            int ny = y + move[1];

            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
                string next = curr;
                swap(next[x * 3 + y], next[nx * 3 + ny]);

                if (!visited.count(next)) {
                    visited.insert(next);
                    q.push(next);
                }
            }
        }
    }

    return -1; // Goal not reachable
}

int main() {
    string start, goal;

    start="724506831";
    // cin >> start;

    goal="012345678";
    // cin >> goal;

    if (!isSolvable(start)) {
        cout << "Puzzle is not solvable\n";
        return 0;
    }

    int result = bfs(start, goal);

    if (result == -1)
        cout << "Goal state not reachable\n";
    else
        cout << "States explored before reaching goal: " << result << "\n";

    return 0;
}
