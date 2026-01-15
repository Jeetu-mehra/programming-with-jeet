#include <iostream>
#include <vector>
using namespace std;

// NODE STRUCT
struct Node {
    int person;
    vector<int> path;
};

// CUSTOM QUEUE
class Queue {
private:
    Node arr[100];
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
void BFS(vector<int> graph[], int start, vector<string>& names) {
    Queue q;
    vector<bool> visited(names.size(), false);

    q.enqueue({start, {start}});
    visited[start] = true;

    cout << "\nBFS Tree starting from " << names[start] << ":\n";

    while (!q.isEmpty()) {
        Node curr = q.dequeue();
        int u = curr.person;

        cout << names[u] << " -> ";

        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.enqueue({v, curr.path});
                cout << names[v] << "  ";
            }
        }
        cout << endl;
    }
}

// DFS FUNCTION
void DFS(
    int u,
    vector<int> graph[],
    vector<bool>& visited,
    vector<string>& names
) {
    visited[u] = true;
    cout << names[u] << " -> ";

    for (int v : graph[u]) {
        if (!visited[v]) {
            DFS(v, graph, visited, names);
        }
    }
}



// MAIN FUNCTION
int main() {
    vector<string> names = {
        "Raj","Priya","Aarav","Sunil","Akash",
        "Neha1","Neha2","Sneha","Rahul",
        "Arjun1","Maya","Arjun2","Pooja"
    };

    vector<int> graph[13];

    graph[0] = {1,3};            
    graph[1] = {0,2,4};          
    graph[2] = {1,6,9};         
    graph[3] = {0,7};       
    graph[4] = {1,5};          
    graph[5] = {4,8};            
    graph[6] = {2,8};            
    graph[7] = {3,8,10};         
    graph[8] = {5,6,7,11};       
    graph[9] = {2,12};           
    graph[10] = {7};            
    graph[11] = {8,12};          
    graph[12] = {9,11};         

    BFS(graph, 0, names);   // BFS from Raj

    cout << "\nDFS Tree starting from Raj:\n";
    vector<bool> visited(13, false);
    DFS(0, graph, visited, names);

    return 0;
}
