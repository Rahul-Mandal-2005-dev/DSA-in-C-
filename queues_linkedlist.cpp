#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};
class QueuesLinkedlist
{
private:
    Node *head;
    Node *tail;

public:
    QueuesLinkedlist() : head(NULL), tail(NULL) {}

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop()
    {
        Node *temp = head;
        cout <<"POP: "<<temp->data << endl;
        head = temp->next;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    QueuesLinkedlist q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.display();
    q1.pop();
    q1.display();
    return 0;
}