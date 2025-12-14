#include <iostream>
#include <unordered_set>
using namespace std;
class Node {
public:
    int data;    
    Node* next;  
    Node(int value) 
    {
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

    void removeDuplicates() {
        if (head == nullptr) return;  
        unordered_set<int> seen; 
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (seen.find(current->data) != seen.end()) {
                prev->next = current->next;  
                delete current;           
                current = prev->next;
            } 
            else {
                seen.insert(current->data);
                prev = current;
                current = current->next;
            }
        }
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
    int n, value;

    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        ll.insertAtEnd(value);
    }
    cout << "Original linked list: ";
    ll.display();
    ll.removeDuplicates();
    cout << "Linked list after removing duplicates: ";
    ll.display();
    return 0;
}
