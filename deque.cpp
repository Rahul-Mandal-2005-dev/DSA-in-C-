#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Deque
{
    Node *tail;
    Node *head;

public:
    Deque()
    {
        head = tail = NULL;
    }
    void headpush(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
           
        }
    }
    void headpop()
    {
    }
    void tailpush(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void tailpop()
    {
    }
    void display()
    {
    }
};

int main()
{
    Deque d1;

    return 0;
}