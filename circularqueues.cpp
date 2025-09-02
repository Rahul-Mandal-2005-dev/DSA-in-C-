#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};
class CircularQueues
{
private:
    Node *head;
    Node *tail;

public:
    CircularQueues() : head(NULL), tail(NULL) {}

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
    void pop()
    {
        Node *temp = head;
        cout << "POP: " << temp->data << endl;
        head = temp->next;
        tail->next = head;
        delete temp;
    }
    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << "Back to front: " << tail->next->data << endl;
    }
};
int main()
{
    CircularQueues q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.display();
    q1.pop();
    q1.display();
    return 0;
}