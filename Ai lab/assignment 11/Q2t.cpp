#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> digits = {0,1,2,3,4,5,6,7,8,9};

    // First permutation already sorted
    while (true) {

        int S = digits[0];
        int E = digits[1];
        int N = digits[2];
        int D = digits[3];
        int M = digits[4];
        int O = digits[5];
        int R = digits[6];
        int Y = digits[7];

        // Leading digit constraint
        if (S != 0 && M != 0) {

            int send  = 1000*S + 100*E + 10*N + D;
            int more  = 1000*M + 100*O + 10*R + E;
            int money = 10000*M + 1000*O + 100*N + 10*E + Y;

            if (send + more == money) {
                cout << "Solution Found:\n";
                cout << "S=" << S << ", E=" << E << ", N=" << N << ", D=" << D
                     << ", M=" << M << ", O=" << O << ", R=" << R << ", Y=" << Y << endl;

                cout << send << " + " << more << " = " << money << endl;
                break;
            }
        }

        // Move to next permutation
        if (!next_permutation(digits.begin(), digits.end())) {
            break; // no more permutations
        }
    }

    return 0;
}