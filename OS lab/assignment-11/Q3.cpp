#include <stdio.h>
#define MAX 10

int n, m; // processes, resources
int available[MAX];
int max[MAX][MAX];
int allocation[MAX][MAX];
int need[MAX][MAX];

// Calculate need matrix
void calculate_need() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}

// Safety algorithm
int is_safe() {
    int work[MAX], finish[MAX] = {0}, safeSeq[MAX];
    
    for (int i = 0; i < m; i++)
        work[i] = available[i];

    int count = 0;

    while (count < n) {
        int found = 0;

        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > work[j])
                        break;
                }

                if (j == m) {
                    for (int k = 0; k < m; k++)
                        work[k] += allocation[i][k];

                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }

        if (!found) {
            printf("\n❌ System is NOT in safe state\n");
            return 0;
        }
    }

    printf("\n✅ System is in SAFE state\nSafe sequence: ");
    for (int i = 0; i < n; i++)
        printf("P%d ", safeSeq[i]);
    printf("\n");

    return 1;
}

// Request resources
void request_resources(int pid) {
    int request[MAX];

    printf("Enter request for process P%d:\n", pid);
    for (int i = 0; i < m; i++)
        scanf("%d", &request[i]);

    // Check request <= need
    for (int i = 0; i < m; i++) {
        if (request[i] > need[pid][i]) {
            printf("❌ Error: Request exceeds need\n");
            return;
        }
    }

    // Check request <= available
    for (int i = 0; i < m; i++) {
        if (request[i] > available[i]) {
            printf("❌ Resources not available\n");
            return;
        }
    }

    // Try allocation
    for (int i = 0; i < m; i++) {
        available[i] -= request[i];
        allocation[pid][i] += request[i];
        need[pid][i] -= request[i];
    }

    // Check safety
    if (!is_safe()) {
        // Rollback
        for (int i = 0; i < m; i++) {
            available[i] += request[i];
            allocation[pid][i] -= request[i];
            need[pid][i] += request[i];
        }
        printf("❌ Request denied (unsafe state)\n");
    } else {
        printf("✅ Request granted\n");
    }
}

// Release resources
void release_resources(int pid) {
    int release[MAX];

    printf("Enter release for process P%d:\n", pid);
    for (int i = 0; i < m; i++)
        scanf("%d", &release[i]);

    for (int i = 0; i < m; i++) {
        if (release[i] > allocation[pid][i]) {
            printf("❌ Cannot release more than allocated\n");
            return;
        }
    }

    for (int i = 0; i < m; i++) {
        allocation[pid][i] -= release[i];
        available[i] += release[i];
        need[pid][i] += release[i];
    }

    printf("✅ Resources released\n");
}

int main() {
    printf("Enter number of processes and resources: ");
    scanf("%d %d", &n, &m);

    printf("Enter available resources:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &available[i]);

    printf("Enter MAX matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &max[i][j]);

    printf("Enter ALLOCATION matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &allocation[i][j]);

    calculate_need();

    int choice, pid;

    while (1) {
        printf("\n1. Request\n2. Release\n3. Check Safe State\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter process id: ");
                scanf("%d", &pid);
                request_resources(pid);
                break;

            case 2:
                printf("Enter process id: ");
                scanf("%d", &pid);
                release_resources(pid);
                break;

            case 3:
                is_safe();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}