#include <bits/stdc++.h>
using namespace std;

int main() {
    // Rules: (premises -> conclusion)
    vector<pair<vector<string>, string>> rules = {
        {{"P"}, "Q"},
        {{"L", "M"}, "P"},
        {{"A", "B"}, "L"}
    };

    // Initial facts
    set<string> facts = {"A", "B", "M"};

    string goal = "Q";

    bool added = true;

    while (added) {
        added = false;

        for (auto rule : rules) {
            vector<string> premises = rule.first;
            string conclusion = rule.second;

            bool canApply = true;

            for (auto p : premises) {
                if (facts.find(p) == facts.end()) {
                    canApply = false;
                    break;
                }
            }

            if (canApply && facts.find(conclusion) == facts.end()) {
                facts.insert(conclusion);
                cout << "Derived: " << conclusion << endl;
                added = true;
            }
        }

        if (facts.find(goal) != facts.end()) {
            cout << "\nGoal " << goal << " reached!" << endl;
            return 0;
        }
    }

    cout << "\nGoal not reached!" << endl;
    return 0;
}