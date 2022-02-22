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

int main()
{
    std::cout << "Hello World!\n" ;
}