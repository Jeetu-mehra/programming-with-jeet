#include <stdio.h>
#include <stdlib.h>
// Function to read the matrix
void readMatrix(int ***matrix, int rows, int cols) {
    *matrix = (int **)malloc(rows * sizeof(int *));  // Allocate memory for rows
    if (*matrix == NULL) {
        printf("Memory allocation failed for rows\n");
        exit(1);
    }
    for (int i = 0; i < rows; i++) {
        (*matrix)[i] = (int *)malloc(cols * sizeof(int));  // Allocate memory for each row
        if ((*matrix)[i] == NULL) {
            printf("Memory allocation failed for columns\n");
            exit(1);
        }

        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &((*matrix)[i][j]));  // Read element using pointer
        }
    }
}
// Function to compute the product of two matrices
void multiplyMatrices(int **A, int **B, int **result, int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Number of columns of A must equal number of rows of B.\n");
        return;
    }
    // Initialize result matrix to zero
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }
    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int **matrix, int rows, int cols) {
    printf("Matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);  // Access matrix element using pointer
        }
        printf("\n");
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input for matrix A
    printf("Enter the number of rows of matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns of matrix A: ");
    scanf("%d", &colsA);

    int **A;
    readMatrix(&A, rowsA, colsA);

    // Input for matrix B
    printf("Enter the number of rows of Matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns of Matrix B: ");
    scanf("%d", &colsB);

    int **B;
    readMatrix(&B, rowsB, colsB);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");

        // Free allocated memory for matrices
        for (int i = 0; i < rowsA; i++) {
            free(A[i]);
        }
        free(A);
        for (int i = 0; i < rowsB; i++) {
            free(B[i]);
        }
        free(B);

        return 1;
    }

    // Dynamically allocate memory for the result matrix
    int **result = (int **)malloc(rowsA * sizeof(int *));
    if (result == NULL) {
        printf("Memory allocation failed for result matrix\n");
        return 1;
    }
    for (int i = 0; i < rowsA; i++) {
        result[i] = (int *)malloc(colsB * sizeof(int));
        if (result[i] == NULL) {
            printf("Memory allocation failed for result matrix rows\n");
            return 1;
        }
    }

    // Perform matrix multiplication
    multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);

    // Display the result matrix
    printf("Resultant Matrix after multiplication:\n");
    displayMatrix(result, rowsA, colsB);

    // Free dynamically allocated memory
    for (int i = 0; i < rowsA; i++) {
        free(A[i]);
    }
    free(A);
    for (int i = 0; i < rowsB; i++) {
        free(B[i]);
    }
    free(B);
    for (int i = 0; i < rowsA; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}