//write a program to travese a singly linked list

#include<iostream>
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

    void traverse() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Traversing the linked list: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    int n, value;

    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        ll.insertAtEnd(value);
    }

    ll.traverse();

    return 0;
}
