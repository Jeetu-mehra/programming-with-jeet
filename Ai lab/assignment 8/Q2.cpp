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

// -------- Single Point Crossover --------
vector<int> crossoverOnePoint(vector<int> &p1, vector<int> &p2) {

    int point = rand() % N;
    vector<int> child(N, -1);

    for(int i = 0; i < point; i++)
        child[i] = p1[i];

    int index = point;
    for(int i = 0; i < N; i++) {
        if(find(child.begin(), child.end(), p2[i]) == child.end())
            child[index++] = p2[i];
    }

    return child;
}

// -------- Two Point Crossover --------
vector<int> crossoverTwoPoint(vector<int> &p1, vector<int> &p2) {

    int p1_idx = rand() % N;
    int p2_idx = rand() % N;
    if(p1_idx > p2_idx) swap(p1_idx, p2_idx);

    vector<int> child(N, -1);

    for(int i = p1_idx; i <= p2_idx; i++)
        child[i] = p1[i];

    int index = 0;
    for(int i = 0; i < N; i++) {
        if(find(child.begin(), child.end(), p2[i]) == child.end()) {
            while(child[index] != -1) index++;
            child[index] = p2[i];
        }
    }

    return child;
}

vector<int> geneticAlgorithm(bool twoPoint = false,
                             int populationSize = 50,
                             int generations = 500) {

    vector<vector<int>> population;

    // Initial Population
    for(int i = 0; i < populationSize; i++) {
        vector<int> tour(N);
        iota(tour.begin(), tour.end(), 0);
        random_shuffle(tour.begin(), tour.end());
        population.push_back(tour);
    }

    for(int gen = 0; gen < generations; gen++) {

        sort(population.begin(), population.end(),
             [](vector<int> &a, vector<int> &b) {
                 return calculateCost(a) < calculateCost(b);
             });

        vector<vector<int>> newPop;

        // Elitism
        newPop.push_back(population[0]);
        newPop.push_back(population[1]);

        while(newPop.size() < populationSize) {

            vector<int> parent1 = population[rand()%10];
            vector<int> parent2 = population[rand()%10];

            vector<int> child;

            if(twoPoint)
                child = crossoverTwoPoint(parent1, parent2);
            else
                child = crossoverOnePoint(parent1, parent2);

            // Mutation
            if(rand()%100 < 10) {
                int i = rand()%N;
                int j = rand()%N;
                swap(child[i], child[j]);
            }

            newPop.push_back(child);
        }

        population = newPop;
    }

    sort(population.begin(), population.end(),
         [](vector<int> &a, vector<int> &b) {
             return calculateCost(a) < calculateCost(b);
         });

    return population[0];
}

int main() {

    srand(time(0));

    cout << "===== GENETIC ALGORITHM =====\n\n";

    vector<int> result1 = geneticAlgorithm(false);
    cout << "Single Point Crossover:\n";
    cout << "Best Tour: ";
    printTour(result1);
    cout << "Cost: " << calculateCost(result1) << "\n\n";

    vector<int> result2 = geneticAlgorithm(true);
    cout << "Two Point Crossover:\n";
    cout << "Best Tour: ";
    printTour(result2);
    cout << "Cost: " << calculateCost(result2) << "\n";

    return 0;
}