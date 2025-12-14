/*2. Write a C program to hold two integer pointers as structure members. Allocate space
for the structure and its data members during runtime. Get one array as input. In the
second array copy the elements of the first array and replace the odd positioned
elements by the product of its adjacent elements. Access the array elements and
structures using pointers instead of subscript notation.
First Array (Input)
1 2 3 4 5 6
Second Array (Input)
1 3 3 15 5 6 */
#include <stdio.h>
#include <stdlib.h>

struct Arrays {
    int *arr1;  // Pointer to first array
    int *arr2;  // Pointer to second array
};

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the structure and arrays
    struct Arrays *arrays = (struct Arrays *)malloc(sizeof(struct Arrays));
    arrays->arr1 = (int *)malloc(n * sizeof(int));
    arrays->arr2 = (int *)malloc(n * sizeof(int));

    if (arrays == NULL || arrays->arr1 == NULL || arrays->arr2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", (arrays->arr1 + i));
    }

    // Process the second array by copying and modifying odd positioned elements
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {  // For odd positions (1, 3, 5, etc.)
            if (i > 0 && i < n - 1) {
                *(arrays->arr2 + i) = (*(arrays->arr1 + i - 1)) * (*(arrays->arr1 + i + 1));
            } else {
                *(arrays->arr2 + i) = *(arrays->arr1 + i);  // For boundary elements, no change
            }
        } else {
            *(arrays->arr2 + i) = *(arrays->arr1 + i);  // Copy even positioned elements as is
        }
    }

    // Output the first and second arrays
    printf("\nFirst Array (Input):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arrays->arr1 + i));
    }

    printf("\nSecond Array (Output):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arrays->arr2 + i));
    }

    // Free dynamically allocated memory
    free(arrays->arr1);
    free(arrays->arr2);
    free(arrays);

    return 0;
}