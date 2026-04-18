#include <iostream>
using namespace std;

// Structure for segment
struct Segment {
    int base;
    int limit;
    bool allocated;
};

int main() {
    Segment code, data, stack;

    // Allocation
    cout << "=== Memory Allocation ===\n";

    // Code Segment
    cout << "\nEnter Code Segment Base and Size:\n";
    cin >> code.base >> code.limit;
    code.allocated = true;

    // Data Segment
    cout << "\nEnter Data Segment Base and Size:\n";
    cin >> data.base >> data.limit;
    data.allocated = true;

    // Stack Segment
    cout << "\nEnter Stack Segment Base and Size:\n";
    cin >> stack.base >> stack.limit;
    stack.allocated = true;

    // Display allocated segments
    cout << "\n=== Allocated Segments ===\n";
    cout << "Code  -> Base: " << code.base << ", Size: " << code.limit << endl;
    cout << "Data  -> Base: " << data.base << ", Size: " << data.limit << endl;
    cout << "Stack -> Base: " << stack.base << ", Size: " << stack.limit << endl;

    // Address translation
    int choice, offset;
    cout << "\nChoose Segment to Access:\n";
    cout << "1. Code\n2. Data\n3. Stack\n";
    cin >> choice;

    cout << "Enter Offset: ";
    cin >> offset;

    Segment selected;

    if (choice == 1) selected = code;
    else if (choice == 2) selected = data;
    else if (choice == 3) selected = stack;
    else {
        cout << "\n❌ Invalid Choice!" << endl;
        return 0;
    }

    if (offset >= selected.limit) {
        cout << "\n❌ Segmentation Fault!" << endl;
    } else {
        int physical = selected.base + offset;
        cout << "\n✅ Physical Address = " << physical << endl;
    }

    // Deallocation
    cout << "\n=== Deallocating Memory ===\n";
    code.allocated = false;
    data.allocated = false;
    stack.allocated = false;

    cout << "All segments deallocated successfully.\n";

    return 0;
}