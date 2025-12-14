// Question 1: Implement a priority queue using a linked list. The queue has the
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
    int priority;
    Node *next;
    Node(int data, int priority)
    {
        this->data = data;
        this->priority = priority;
        this->next = NULL;
    }
};

class PriorityQueue
{
public:
    Node *front;
    Node *rear;

    PriorityQueue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data, int priority)
    {
        Node *newNode = new Node(data, priority);

        if (isEmpty())
        {
            front = newNode;
            rear = newNode;
            return;
        }
        else
        {
            Node *temp = front;
            Node *prev = NULL;
            while (temp != NULL && temp->priority < priority)
            {
                prev = temp;
                temp = temp->next;
            }
            if (prev == NULL)
            {
                newNode->next = front;
                front = newNode;
            }
            else
            {
                prev->next = newNode;
                newNode->next = temp;
            }
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
            delete temp;
            if(front == NULL)
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
    PriorityQueue pq;
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
            int data, priority;
            cout << "Enter data: ";
            cin >> data;
            cout << "Enter priority: ";
            cin >> priority;
            pq.enqueue(data, priority);
            break;
        case 2:
            pq.dequeue();
            break;
        case 3:
            cout << "Peek: " << pq.peek() << endl;
            break;
        case 4:
            pq.display();
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}