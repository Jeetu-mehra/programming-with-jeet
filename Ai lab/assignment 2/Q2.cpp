#include <bits/stdc++.h>
using namespace std;

// Check if puzzle is solvable
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

int statesExplored = 0;
int goalDepth = -1;
bool found = false;

// Depth Limited DFS
void dfs(string curr, string goal, int depth, int maxDepth,
         unordered_set<string>& visited) {

    if (found || depth > maxDepth)
        return;

    statesExplored++;

    if (curr == goal) {
        found = true;
        goalDepth = depth;
        return;
    }

    visited.insert(curr);

    int zeroPos = curr.find('0');
    int x = zeroPos / 3;
    int y = zeroPos % 3;

    vector<vector<int>> moves = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}
    };

    for (auto move : moves) {
        int nx = x + move[0];
        int ny = y + move[1];

        if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
            string next = curr;
            swap(next[x * 3 + y], next[nx * 3 + ny]);

            if (!visited.count(next)) {
                dfs(next, goal, depth + 1, maxDepth, visited);
            }
        }
    }
}

int main() {
    string start = "724506831";
    string goal  = "012345678";

    if (!isSolvable(start)) {
        cout << "Puzzle is not solvable\n";
        return 0;
    }

    unordered_set<string> visited;
    int maxDepth = 100;   // sufficient for most 8-puzzle cases

    dfs(start, goal, 0, maxDepth, visited);

    if (found) {
        cout << "Goal found at depth: " << goalDepth << endl;
        cout << "States explored by DFS: " << statesExplored << endl;
    } else {
        cout << "Goal not found within depth limit\n";
    }

    return 0;
}
