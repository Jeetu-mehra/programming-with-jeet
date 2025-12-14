#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {12, 45, 33, 87, 56, 9, 11, 7, 67};
    int n = 9;
    int bucketCount = 7;
    vector<int> buckets[7];

    for (int i = 0; i < n; i++) {
        int index = arr[i] / 15; // divide range (0-100) into 7 buckets (0-6)
        if (index >= bucketCount) index = bucketCount - 1;
        buckets[index].push_back(arr[i]);
    }

    for (int i = 0; i < bucketCount; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    vector<int> result;
    for (int i = 0; i < bucketCount; i++) {
        for (int val : buckets[i]) {
            result.push_back(val);
        }
    }

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
