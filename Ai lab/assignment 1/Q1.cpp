#include <iostream>
#include <vector>
using namespace std;

//NODE STRUCT 
struct Node {
    int cityIndex;
    int totalCost;
    vector<int> path;
};

// CUSTOM QUEUE 
class Queue {
private:
    Node arr[1000];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return front > rear;
    }

    void enqueue(Node x) {
        arr[++rear] = x;
    }

    Node dequeue() {
        return arr[front++];
    }
};

// BFS FUNCTION 
void BFS(vector<pair<int,int>> graph[], int start, int end, vector<string>& cities) {
    Queue q;
    q.enqueue({start, 0, {start}});

    cout << "\nAll BFS paths from " << cities[start]
         << " to " << cities[end] << ":\n";

    while(!q.isEmpty()) {
        Node curr = q.dequeue();
        int u = curr.cityIndex;

        if(u == end) {
            for(int idx : curr.path) {
                cout << cities[idx] << " -> ";
            }
            cout << "END | Total Distance: "
                 << curr.totalCost << " miles\n";
            continue;
        }

        for(auto &neighbor : graph[u]) {
            int v = neighbor.first;
            int cost = neighbor.second;

            bool visited = false;
            for(int idx : curr.path) {
                if(idx == v) {
                    visited = true;
                    break;
                }
            }

            if(!visited) {
                vector<int> newPath = curr.path;
                newPath.push_back(v);
                q.enqueue({v, curr.totalCost + cost, newPath});
            }
        }
    }
}

// DFS FUNCTION
void DFS(
    int u,
    int end,
    vector<pair<int,int>> graph[],
    vector<bool>& visited,
    vector<int>& path,
    int cost,
    vector<string>& cities
) {
    visited[u] = true;
    path.push_back(u);

    if(u == end) {
        for(int idx : path) {
            cout << cities[idx] << " -> ";
        }
        cout << "END | Total Distance: "
             << cost << " miles\n";
    }
    else {
        for(auto &neighbor : graph[u]) {
            int v = neighbor.first;
            int w = neighbor.second;

            if(!visited[v]) {
                DFS(v, end, graph, visited, path, cost + w, cities);
            }
        }
    }

    path.pop_back();
    visited[u] = false;
}

// MAIN FUNCTION 
int main() {
    vector<string> cities = {
        "Chicago","Detroit","Cleveland","Buffalo","Syracuse",
        "Pittsburgh","Columbus","Indianapolis","New York",
        "Philadelphia","Baltimore","Boston","Providence","Portland"
    };

    vector<pair<int,int>> graph[14];
    int weight[14][14] = {0};

    weight[0][1]=283; weight[1][0]=283;
    weight[0][2]=345; weight[2][0]=345;
    weight[0][7]=182; weight[7][0]=182;
    weight[1][2]=169; weight[2][1]=169;
    weight[1][3]=256; weight[3][1]=256;
    weight[2][3]=189; weight[3][2]=189;
    weight[2][5]=134; weight[5][2]=134;
    weight[2][6]=144; weight[6][2]=144;
    weight[3][4]=150; weight[4][3]=150;
    weight[3][8]=312; weight[8][3]=312;
    weight[4][8]=254; weight[8][4]=254;
    weight[4][11]=312; weight[11][4]=312;
    weight[4][9]=253; weight[9][4]=253;
    weight[5][6]=185; weight[6][5]=185;
    weight[5][9]=305; weight[9][5]=305;
    weight[6][7]=176; weight[7][6]=176;
    weight[6][9]=247; weight[9][6]=247;
    weight[8][9]=97;  weight[9][8]=97;
    weight[8][11]=215; weight[11][8]=215;
    weight[8][12]=181; weight[12][8]=181;
    weight[9][10]=101; weight[10][9]=101;
    weight[10][11]=161; weight[11][10]=161;
    weight[11][12]=50;  weight[12][11]=50;
    weight[12][13]=107; weight[13][12]=107;

    for(int i=0;i<14;i++){
        for(int j=0;j<14;j++){
            if(weight[i][j]!=0){
                graph[i].push_back({j, weight[i][j]});
            }
        }
    }

    BFS(graph, 0, 4, cities);   // Chicago → Syracuse

    cout << "\nAll DFS paths from Chicago to Syracuse:\n";
    vector<bool> visited(14, false);
    vector<int> path;
    DFS(0, 4, graph, visited, path, 0, cities);

    return 0;
}
