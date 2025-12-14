// Given a linked list of n nodes and an integer k, write a function to rotate the
// linked list counter clockwise by k nodes.

#include <iostream>
using namespace std;

class Node {
public:
    int data;   
    Node* next;  

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;  

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void rotate(int k) {
        if (head == nullptr || k == 0) return; 

        Node* temp = head;
        int length = 1;
        while (temp->next != nullptr) {
            temp = temp->next;
            length++;
        }

        k = k % length;
        if (k == 0) return;

        temp->next = head;

        int count = 1;
        Node* newTail = head;
        while (count < k) {
            newTail = newTail->next;
            count++;
        }

        head = newTail->next;
        newTail->next = nullptr;
    }

    void display() {
        if (head == nullptr) {
            cout << "Linked list is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    int n, k, value;

    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        ll.insertAtEnd(value);
    }

    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Original linked list: ";
    ll.display();
    ll.rotate(k);

    cout << "Rotated linked list: ";
    ll.display();

    return 0;
}
