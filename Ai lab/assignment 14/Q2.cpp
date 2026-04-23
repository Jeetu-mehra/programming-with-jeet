#include <bits/stdc++.h>
using namespace std;

// Rules: premises -> conclusion
map<string, vector<vector<string>>> rules;
set<string> facts;
set<string> visited;

bool backward(string goal) {
    // If already a fact
    if (facts.count(goal)) return true;

    // Avoid infinite loops
    if (visited.count(goal)) return false;
    visited.insert(goal);

    // If no rule produces goal
    if (rules.find(goal) == rules.end()) return false;

    // Try all rules that produce goal
    for (auto premises : rules[goal]) {
        bool canProve = true;

        for (auto p : premises) {
            if (!backward(p)) {
                canProve = false;
                break;
            }
        }

        if (canProve) return true;
    }

    return false;
}

int main() {
    // -------- Problem (a) --------
    rules["Q"] = {{"P"}, {"R"}};
    rules["P"] = {{"A"}};
    rules["R"] = {{"B"}};

    facts = {"A", "B"};

    string goal = "Q";

    if (backward(goal))
        cout << "Goal " << goal << " reached!" << endl;
    else
        cout << "Goal not reached!" << endl;

    return 0;
}