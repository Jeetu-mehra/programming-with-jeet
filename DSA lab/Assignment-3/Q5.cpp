//Write a C program that converts a singly linked list into an array and returns it.

#include <iostream>
#include <vector>
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
    Node* tail;  

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    vector<int> toArray() {
        vector<int> arr;
        Node* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return arr;
    }

    void display() {
        if (head == nullptr) {
            cout << "Linked list is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked list: ";
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

    cout << "The linked list is: ";
    ll.display();

    vector<int> arr = ll.toArray();

    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
