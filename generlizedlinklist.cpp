// write a c++ program to create a singly linklist
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};
class Generalized_linklist
{
    Node *head;
    Node *tail;

public:
    Generalized_linklist() : head(NULL), tail(NULL) {}

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int value)
    {
        Node *newNode = new Node(value);
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

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Node is empty" << endl;
        }
        else
        {
            Node*temp = head;
            cout<<"POP: "<<temp->data<<endl;
            head = head->next;
            delete temp;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    Generalized_linklist g1;
    g1.push_front(10);
    g1.push_front(20);
    g1.push_front(30);
    g1.push_front(40);
    g1.display();
    g1.push_back(50);
    g1.push_back(60);
    g1.push_back(70);
    g1.display();
    g1.pop_front();
    g1.display();

    return 0;
}