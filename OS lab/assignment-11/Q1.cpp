#include <stdio.h>

#define MAX 100

int graph[MAX][MAX];
int n, m;

int main() {
    int edges;

    printf("Enter number of processes and resources: ");
    scanf("%d %d", &n, &m);

    int total = n + m;

    // Initialize graph with 0
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);   // ✅ FIXED (added &)

    printf("Enter edges (type p r)\n");
    printf("type 0: P->R (request), type 1: R->P (allocation)\n");

    for (int i = 0; i < edges; i++) {
        int type, p, r;
        scanf("%d %d %d", &type, &p, &r);

        if (type == 0) {
            graph[p][n + r] = 1;   // request edge
        } else {
            graph[n + r][p] = 1;   // allocation edge
        }
    }

    printf("\nAdjacency Matrix:\n");

    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}