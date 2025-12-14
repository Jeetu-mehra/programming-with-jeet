// Q3 Given a singly linked list of n nodes, detect if it contains a loop or not.

#include <iostream>
using namespace std;
class Node {
private:
    int data;
    Node *next;
public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    friend class LinkedList;
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
        head = NULL;
    }

    void insert(int data) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void createLoop(int position) {
        if (position == 0) return;
        Node *loopNode = head;
        Node *temp = head;
        int count = 1;
        while (count < position && loopNode != NULL) {
            loopNode = loopNode->next;
            count++;
        }
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = loopNode;
    }

    // Function to detect a loop in the linked list
    bool detectLoop() {
        if (head == NULL) return false;

        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    LinkedList list;
    int n, data, loopPosition;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> data;
        list.insert(data);
    }

    cout << "Enter the position to create a loop (0 for no loop): ";
    cin >> loopPosition;

    // Create a loop for testing
    list.createLoop(loopPosition);

    if (list.detectLoop()) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    return 0;
}