#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value) {}
};
class StackLinkedList
{
private:
    Node *top;

public:
    StackLinkedList() : top(nullptr) {}

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        Node *temp = top;
        cout <<"POP: "<<temp->data << endl;
        top = temp->next;
    }
    void display()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    StackLinkedList l1;
    l1.push(10);
    l1.push(20);
    l1.push(30);
    l1.push(40);
    l1.display();
    l1.pop();
    l1.display();
    return 0;
}