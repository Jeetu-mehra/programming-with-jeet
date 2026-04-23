#include <bits/stdc++.h>
using namespace std;

// Clause = set of literals
typedef set<string> Clause;

// Resolve two clauses
set<Clause> resolve(Clause c1, Clause c2) {
    set<Clause> resolvents;

    for (auto l1 : c1) {
        string neg = (l1[0] == '-') ? l1.substr(1) : "-" + l1;

        if (c2.count(neg)) {
            Clause newClause;

            for (auto x : c1)
                if (x != l1) newClause.insert(x);

            for (auto x : c2)
                if (x != neg) newClause.insert(x);

            resolvents.insert(newClause);
        }
    }
    return resolvents;
}

bool resolution(set<Clause> KB) {
    set<Clause> newSet;

    while (true) {
        vector<Clause> clauses(KB.begin(), KB.end());

        for (int i = 0; i < clauses.size(); i++) {
            for (int j = i + 1; j < clauses.size(); j++) {

                auto resolvents = resolve(clauses[i], clauses[j]);

                for (auto r : resolvents) {
                    if (r.empty()) return true; // empty clause
                    newSet.insert(r);
                }
            }
        }

        bool subset = true;
        for (auto c : newSet)
            if (!KB.count(c)) subset = false;

        if (subset) return false;

        for (auto c : newSet)
            KB.insert(c);
    }
}

int main() {
    // Problem (a)

    set<Clause> KB = {
        {"P", "Q"},
        {"-P", "R"},
        {"-Q", "S"},
        {"-R", "S"},
        {"-S"}  // Negated goal
    };

    if (resolution(KB))
        cout << "S is TRUE (proved by contradiction)\n";
    else
        cout << "S cannot be proved\n";

    return 0;
}