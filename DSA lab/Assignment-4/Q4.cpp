// Q4: Write a C/C++ program to implement doubly linked list with the
// following function
// (i) insertAtFirst(&head, new_data): This function should insert the new
// data/element at the beginning of the linked list.
// (ii) insertAtEnd(&head, new_data): This function should insert the new
// data/element at the end of the linked list
// (iii) insertAtMiddle(&head, new_data): This function should insert the new
// data/element at the middle of the linked list
// (iv) insertAfterNode(&head, given_node, new_data): This function should
// insert the new data/element after the given node in the linked list.
// Example: Suppose, you want to insert 60 after node 40 in the given linked
// list 10 → 20 → 30 → 40 → 50, the updated linked list will be
// 10 → 20 → 30 → 40 → 60 → 50\
// (v) display(&head): This function should display the content of the linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtFirst(int new_data) {
        Node* newNode = new Node(new_data);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void insertAtEnd(int new_data) {
        Node* newNode = new Node(new_data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
    void insertAtMiddle(int new_data) {
        if (head == nullptr) {
            insertAtFirst(new_data);
            return;
        }

        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* newNode = new Node(new_data);
        newNode->next = slow;
        newNode->prev = slow->prev;

        if (slow->prev != nullptr) {
            slow->prev->next = newNode;
        } else {
            head = newNode; 
        }

        slow->prev = newNode;
    }
    void insertAfterNode(int given_node, int new_data) {
        Node* temp = head;
        while (temp != nullptr && temp->data != given_node) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Given node " << given_node << " not found!" << endl;
            return;
        }

        Node* newNode = new Node(new_data);
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }
    void display() {
        if (head == nullptr) {
            cout << "The linked list is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " <-> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtFirst(10);
    dll.insertAtEnd(50);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);

    cout << "Initial Linked List: ";
    dll.display();
    dll.insertAtFirst(5);
    cout << "After inserting 5 at the beginning: ";
    dll.display();

    dll.insertAtEnd(60);
    cout << "After inserting 60 at the end: ";
    dll.display();

    dll.insertAtMiddle(25);
    cout << "After inserting 25 in the middle: ";
    dll.display();

    dll.insertAfterNode(40, 60);
    cout << "After inserting 60 after node 40: ";
    dll.display();

    return 0;
}
