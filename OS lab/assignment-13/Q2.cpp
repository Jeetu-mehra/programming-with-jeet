#include <iostream>
using namespace std;

// Segment table structure
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

    int segment, offset;

    // Logical address input
    cout << "\nEnter Logical Address:\n";
    cout << "Segment Number: ";
    cin >> segment;
    cout << "Offset: ";
    cin >> offset;

    // Translation
    if (segment < 0 || segment >= n) {
        cout << "\n❌ Invalid Segment Number!" << endl;
    }
    else {
        int base = seg[segment].base;
        int limit = seg[segment].limit;

        if (offset < limit) {
            int physical = base + offset;
            cout << "\n✅ Physical Address = " << physical << endl;
        } else {
            cout << "\n❌ Segmentation Fault! Offset exceeds limit." << endl;
        }
    }

    return 0;
}