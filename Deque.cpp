#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
    static Node* getnode(int data)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = newNode->next = NULL;
        return newNode;
    }
};

class Deque
{
    Node* front;
    Node* rear;
    int Size;

public:
    Deque()
    {
        front = rear = NULL;
        Size = 0;
    }

    void insertFront(int data);
    void insertRear(int data);
    void deleteFront();
    void deleteRear();

    int getFront();
    int getRear();
    int size();
    bool isEmpty();

};

bool Deque::isEmpty()
{
    return (front == NULL);
}

int Deque::size()
{
    return Size;
}

int Deque::getFront()
{
    if (isEmpty())
        return -1;
    return front->data;
}

int Deque::getRear()
{
    if (isEmpty())
        return -1;
    return rear->data;
}


void Deque::insertFront(int data)
{
    Node* newNode = Node::getnode(data);
   
    if (newNode == NULL) cout << "OverFlow\n";
    else
    {
        if (front == NULL) rear = front = newNode;

        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }

        Size++;
    }
}

void Deque::insertRear(int data)
{
    Node* newNode = Node::getnode(data);

    if (newNode == NULL) cout << "OverFlow\n";
    else
    {
        if (rear == NULL) front = rear = newNode;

        else
        {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }

        Size++;
    }
}

int main()
{
    Deque deque;

    cout << "Insert element '5' at front end\n";
    deque.insertFront(5);

    cout << deque.getFront();

    cout << "Insert element '5' at rear end\n";
    deque.insertRear(6);

    cout << deque.getRear();


}