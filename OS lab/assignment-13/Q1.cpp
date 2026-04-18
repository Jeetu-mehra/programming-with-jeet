#include <iostream>
using namespace std;

// Structure for segment table
struct Segment {
    int base;
    int limit;
};

int main() {
    int n;

    cout << "Enter number of segments: ";
    cin >> n;

    Segment seg[n];

    // Input segment table
    cout << "\nEnter Base and Limit for each segment:\n";
    for (int i = 0; i < n; i++) {
        cout << "Segment " << i << ":\n";
        cout << "Base: ";
        cin >> seg[i].base;
        cout << "Limit: ";
        cin >> seg[i].limit;
    }

    int seg_no, offset;

    // Input logical address
    cout << "\nEnter segment number: ";
    cin >> seg_no;

    cout << "Enter offset: ";
    cin >> offset;

    // Address translation
    if (seg_no >= n) {
        cout << "\n❌ Invalid Segment Number!" << endl;
    }
    else if (offset >= seg[seg_no].limit) {
        cout << "\n❌ Segmentation Fault (Offset exceeds limit)!" << endl;
    }
    else {
        int physical_address = seg[seg_no].base + offset;
        cout << "\n✅ Physical Address = " << physical_address << endl;
    }

    return 0;
}