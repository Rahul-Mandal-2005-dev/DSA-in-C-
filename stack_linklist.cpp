#include <iostream>
using namespace std;
class Node
{
public:

    int data;
    Node *next;
    Node(int data)
    {
        data = data;
    }
};
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        Node *temp = top;
        cout<<"Pop item: "<<temp->data<<endl;
        top = temp->next;
        delete temp;
    }
    void display()
    {
        while (top != NULL)
        {
            cout << top->data << " ";
            top = top->next;
        }
    }
};
int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.display();

    return 0;
}