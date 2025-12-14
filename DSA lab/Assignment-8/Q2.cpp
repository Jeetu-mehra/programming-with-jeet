// Question 2: Implement a Circular queue using a linked list. The queue has the
// following basic operations:
// ● enqueue() – Insert an element in the queue.
// ● dequeue() – Remove the element from the queue.
// ● peek() – Return the element at the front node of the queue
// ● isFull() – Validates if the queue is full or not.
// ● isEmpty() – Checks if the queue is empty.

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

class CircularQueue
{
public:
    Node *front;
    Node *rear;

    CircularQueue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            front = newNode;
            rear = newNode;
            rear->next = front;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
            if (front == NULL)
            {
                rear = NULL;
            }
        }
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
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
        Node *temp = front;
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }
};

int main()
{
    CircularQueue q;
    int choice;
    do
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter data: ";
            cin >> data;
            q.enqueue(data);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << "Peek: " << q.peek() << endl;
            break;
        case 4:
            q.display();
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        
    }
    while (choice != 5);
    
    return 0;
}