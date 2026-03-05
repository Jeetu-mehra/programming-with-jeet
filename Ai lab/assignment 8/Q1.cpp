#include <bits/stdc++.h>
using namespace std;

const int N = 8;

int costMatrix[N][N] = {
    {0,10,15,20,25,30,35,40},
    {12,0,35,15,20,25,30,45},
    {25,30,0,10,40,20,15,35},
    {18,25,12,0,15,30,20,10},
    {22,18,28,20,0,15,25,30},
    {35,22,18,28,12,0,40,20},
    {30,35,22,18,28,32,0,15},
    {40,28,35,22,18,25,12,0}
};

vector<string> cities = {"A","B","C","D","E","F","G","H"};

int calculateCost(vector<int> &tour) {
    int total = 0;
    for(int i = 0; i < N-1; i++)
        total += costMatrix[tour[i]][tour[i+1]];
    total += costMatrix[tour[N-1]][tour[0]];
    return total;
}

void printTour(vector<int> &tour) {
    for(int i : tour)
        cout << cities[i] << " ";
    cout << cities[tour[0]];
    cout << endl;
}

vector<int> localBeamSearch(int k, int maxIterations = 500) {

    vector<vector<int>> beam;

    // Generate k random initial tours
    for(int i = 0; i < k; i++) {
        vector<int> tour(N);
        iota(tour.begin(), tour.end(), 0);
        random_shuffle(tour.begin(), tour.end());
        beam.push_back(tour);
    }

    for(int iter = 0; iter < maxIterations; iter++) {

        vector<vector<int>> neighbors;

        for(auto &state : beam) {
            for(int i = 1; i < N; i++) {
                for(int j = i+1; j < N; j++) {
                    vector<int> temp = state;
                    swap(temp[i], temp[j]);
                    neighbors.push_back(temp);
                }
            }
        }

        sort(neighbors.begin(), neighbors.end(),
             [](vector<int> &a, vector<int> &b) {
                 return calculateCost(a) < calculateCost(b);
             });

        beam.clear();
        for(int i = 0; i < k && i < neighbors.size(); i++)
            beam.push_back(neighbors[i]);
    }

    return beam[0];
}

int main() {

    srand(time(0));

    cout << "===== LOCAL BEAM SEARCH =====\n\n";

    for(int k : {3,5,10}) {
        vector<int> result = localBeamSearch(k);
        cout << "Beam Width k = " << k << endl;
        cout << "Best Tour: ";
        printTour(result);
        cout << "Cost: " << calculateCost(result) << "\n\n";
    }

    return 0;
}