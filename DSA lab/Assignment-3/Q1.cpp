// write a program to create a singly linked list
#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
    int size;
    public:
    LinkedList(){
        head=NULL;tail=NULL;size=0;
    }
    void insertAtEnd(int val){
        Node *temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void display(){
        Node *temp=head;
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
    }
};

int main(){
    LinkedList ll;
    int n,value;
    cout<<"Enter the no of elements in LinkedList: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        ll.insertAtEnd(value);
    }
    cout << "The created linked list is: ";
    ll.display();
}