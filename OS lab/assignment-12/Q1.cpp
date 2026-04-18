#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Block {
    int size;
    bool free;
    int process_id;
};

vector<Block> memory;
int last_alloc = 0; // for Next Fit
int process_counter = 1;

// Initialize memory
void initialize_memory(int total_size) {
    memory.clear();
    memory.push_back({total_size, true, -1});
}

// Display memory
void display_memory() {
    cout << "\nMemory Status:\n";
    for (auto &b : memory) {
        if (b.free)
            cout << "[Free: " << b.size << "] ";
        else
            cout << "[P" << b.process_id << ": " << b.size << "] ";
    }
    cout << endl;
}

// Split block
void split_block(int index, int size) {
    Block newBlock = {memory[index].size - size, true, -1};
    memory[index].size = size;
    memory.insert(memory.begin() + index + 1, newBlock);
}

// First Fit
bool first_fit(int size) {
    for (int i = 0; i < memory.size(); i++) {
        if (memory[i].free && memory[i].size >= size) {
            if (memory[i].size > size)
                split_block(i, size);

            memory[i].free = false;
            memory[i].process_id = process_counter++;
            return true;
        }
    }
    return false;
}

// Best Fit
bool best_fit(int size) {
    int best = -1;
    int min_diff = INT_MAX;

    for (int i = 0; i < memory.size(); i++) {
        if (memory[i].free && memory[i].size >= size) {
            int diff = memory[i].size - size;
            if (diff < min_diff) {
                min_diff = diff;
                best = i;
            }
        }
    }

    if (best == -1) return false;

    if (memory[best].size > size)
        split_block(best, size);

    memory[best].free = false;
    memory[best].process_id = process_counter++;
    return true;
}

// Worst Fit
bool worst_fit(int size) {
    int worst = -1;
    int max_size = -1;

    for (int i = 0; i < memory.size(); i++) {
        if (memory[i].free && memory[i].size >= size) {
            if (memory[i].size > max_size) {
                max_size = memory[i].size;
                worst = i;
            }
        }
    }

    if (worst == -1) return false;

    if (memory[worst].size > size)
        split_block(worst, size);

    memory[worst].free = false;
    memory[worst].process_id = process_counter++;
    return true;
}

// Next Fit
bool next_fit(int size) {
    int n = memory.size();
    int i = last_alloc;

    do {
        if (memory[i].free && memory[i].size >= size) {
            if (memory[i].size > size)
                split_block(i, size);

            memory[i].free = false;
            memory[i].process_id = process_counter++;
            last_alloc = i;
            return true;
        }
        i = (i + 1) % n;
    } while (i != last_alloc);

    return false;
}

// Free memory
void free_memory(int pid) {
    for (int i = 0; i < memory.size(); i++) {
        if (!memory[i].free && memory[i].process_id == pid) {
            memory[i].free = true;
            memory[i].process_id = -1;
            cout << "Process " << pid << " deallocated.\n";
            return;
        }
    }
    cout << "Process not found!\n";
}

// Coalesce free blocks
void coalesce() {
    for (int i = 0; i < memory.size() - 1; i++) {
        if (memory[i].free && memory[i + 1].free) {
            memory[i].size += memory[i + 1].size;
            memory.erase(memory.begin() + i + 1);
            i--;
        }
    }
}

int main() {
    int total_memory = 1000;
    initialize_memory(total_memory);

    int choice, size, pid;

    while (true) {
        cout << "\n1. First Fit\n2. Best Fit\n3. Worst Fit\n4. Next Fit\n";
        cout << "5. Free Memory\n6. Display\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter size: ";
                cin >> size;
                cout << (first_fit(size) ? "Allocated\n" : "Allocation Failed\n");
                break;

            case 2:
                cout << "Enter size: ";
                cin >> size;
                cout << (best_fit(size) ? "Allocated\n" : "Allocation Failed\n");
                break;

            case 3:
                cout << "Enter size: ";
                cin >> size;
                cout << (worst_fit(size) ? "Allocated\n" : "Allocation Failed\n");
                break;

            case 4:
                cout << "Enter size: ";
                cin >> size;
                cout << (next_fit(size) ? "Allocated\n" : "Allocation Failed\n");
                break;

            case 5:
                cout << "Enter process id: ";
                cin >> pid;
                free_memory(pid);
                coalesce();
                break;

            case 6:
                display_memory();
                break;

            case 7:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}