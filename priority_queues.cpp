#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int priority;
    Node *next;
    Node(int value, int pri) : data(value), priority(pri), next(nullptr) {}
};
class PriorityQueues
{
private:
    Node *head;
    Node *tail;

public:
    PriorityQueues() : head(nullptr), tail(nullptr) {}

    void push(int value, int pri)
    {
        Node *newNode = new Node(value, pri);
        if (!head || head->priority >= pri)
        {
            Node *temp = head;
            newNode->next = temp;
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next && pri >= temp->next->priority)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    void pop()
    {
        Node *temp = head;
        cout << "POP: " << temp->data << endl;
        head = temp->next;
        delete temp;
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
    PriorityQueues p1;
    p1.push(30,3);
    p1.push(10,1);
    p1.push(20,2);
    p1.push(40,4);
    p1.display();
    p1.pop();
    p1.display();
    return 0;
}