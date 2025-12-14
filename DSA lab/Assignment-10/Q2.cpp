/*2. Let A[n] be an array of n distinct integers. If I < j and A[i] > A[j], then the pair (I, j) Is
called an inversion of A. Write a C/C++ program that determines the number of
Inversions in any permutation on n elements in O(n lg n) worst-case time. (Hint: Modify
merge sort)
Example: A = {4, 1, 3, 2} output is 4*/

#include <iostream>
using namespace std;

int mergeandcount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;    
    int j = mid + 1; 
    int k = left;    
    int inversions = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (int l = left; l <= right; l++) {
        arr[l] = temp[l];
    }

    return inversions;
}
int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;
        inversions += mergeSortAndCount(arr, temp, left, mid);
        inversions += mergeSortAndCount(arr, temp, mid + 1, right);
        inversions += mergeandcount(arr, temp, left, mid, right);
    }

    return inversions;
}

int main() {
    int arr[] = {4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n]; 
    int numInversions = mergeSortAndCount(arr, temp, 0, n - 1);
    cout << "Number of inversions: " << numInversions << endl;

    return 0;
}