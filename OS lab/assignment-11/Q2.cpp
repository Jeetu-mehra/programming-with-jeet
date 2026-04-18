#include <stdio.h>
#define MAX 100

int graph[MAX][MAX];
int n, m, total;

// DFS function
int dfs(int node, int visited[], int recStack[]) {
    visited[node] = 1;
    recStack[node] = 1;

    for (int i = 0; i < total; i++) {
        if (graph[node][i]) {
            if (!visited[i] && dfs(i, visited, recStack))
                return 1;
            else if (recStack[i])
                return 1;
        }
    }

    recStack[node] = 0;
    return 0;
}

// Check cycle
int detect_deadlock() {
    int visited[MAX] = {0};
    int recStack[MAX] = {0};

    for (int i = 0; i < total; i++) {
        if (!visited[i]) {
            if (dfs(i, visited, recStack))
                return 1;
        }
    }
    return 0;
}

int main() {
    int edges;

    printf("Enter number of processes and resources: ");
    scanf("%d %d", &n, &m);

    total = n + m;

    // Initialize graph
    for (int i = 0; i < total; i++)
        for (int j = 0; j < total; j++)
            graph[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("\nEnter edges (type p r):\n");
    printf("type 0: P->R (request)\n");
    printf("type 1: R->P (allocation)\n");

    for (int i = 0; i < edges; i++) {
        int type, p, r;
        scanf("%d %d %d", &type, &p, &r);

        if (type == 0)
            graph[p][n + r] = 1;   // request
        else
            graph[n + r][p] = 1;   // allocation
    }

    // Check deadlock
    if (detect_deadlock())
        printf("\n❌ Deadlock Detected (Cycle exists)\n");
    else
        printf("\n✅ No Deadlock (No cycle)\n");

    return 0;
}