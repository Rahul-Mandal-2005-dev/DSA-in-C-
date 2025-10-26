#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Queues
{
private:
    Node *front;
    Node *tail;
public:    
    Queues()
    {
        front = tail = NULL;
    }
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (front == NULL)
        {
            front = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }  
    void pop()
    {
        Node*temp = front;
        cout<<"pop: "<<temp->data<<endl;
        front = front->next;
        delete temp;
    }  
    void display()
    {   Node*temp = front;
        while (temp!=NULL)
        {
             cout<<temp->data<<" ";
             temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{   
    Queues q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.display();
    q1.pop();
    q1.display();


    return 0;
}