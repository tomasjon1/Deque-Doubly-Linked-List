#include <iostream>

using namespace std;

// Node of a doubly linked list
struct Node
{
    int data;
    Node* prev;
    Node* next;
    // function to get new node with data and null pointers to next/prev node
    static Node* getnode(int data)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = newNode->next = NULL;
        return newNode;
    }
};

//Class of deque
class Deque
{
    Node* front;
    Node* rear;
    int Size;

//Consturctor to create empty deque
public:
    Deque()
    {
        front = rear = NULL;
        Size = 0;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}