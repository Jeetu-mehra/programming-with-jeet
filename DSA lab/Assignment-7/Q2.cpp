// Question 2: Implement a queue using a linked list with two pointers:
// front and rear. Elements can only be inserted via the rear pointer and
// deleted via the front pointer. The queue has the following basic
// operation:
// • enqueue() – Insert an element in the queue.
// • dequeue() – Remove the element from the queue.
// • peek() – Return the element at the front node of the queue
// • isFull() – Validates if the queue is full or not.
// • isEmpty() – Checks if the queue is empty.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
Queue(){
    front = rear=NULL;
}

void enqueue(int data)
{
    Node *new_node = new Node(data);
    if (front == NULL)
    {
        front = rear = new_node;
        return;
    }
    rear->next = new_node;
    rear = new_node;
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }
    Node *temp = front;
    front = front->next;
    delete temp;
}

int peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return -1;
    }
    return front->data;
}

bool isFull()
{
    return false;
}

bool isEmpty()
{
    return front == NULL;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};

int main()
{
    Queue q;
    cout<<"Enter the operation you want to perform: "<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. isFull"<<endl;
    cout<<"5. isEmpty"<<endl;
    cout<<"6. Display"<<endl;
    cout<<"7. Exit"<<endl;
    int choice;
    cin>>choice;
    while(choice!=7)
    {
        switch(choice)
        {
            case 1:
            {
                int data;
                cout<<"Enter the data you want to insert: ";
                cin>>data;
                q.enqueue(data);
                break;
            }
            case 2:
            {
                q.dequeue();
                break;
            }
            case 3:
            {
                cout<<"Element at the front of the queue is: "<<q.peek()<<endl;
                break;
            }
            case 4:
            {
                cout<<"Queue is full: "<<q.isFull()<<endl;
                break;
            }
            case 5:
            {
                cout<<"Queue is empty: "<<q.isEmpty()<<endl;
                break;
            }
            case 6:
            {
                q.display();
                break;
            }
            default:
            {
                cout<<"Invalid choice."<<endl;
            }
        }
        cout<<"Enter the operation you want to perform: "<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. isEmpty"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>choice;
    }
    return 0;
}