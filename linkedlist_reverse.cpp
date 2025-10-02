#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};
class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = nullptr;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
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
        cout << "none" << endl;
    }

    Node *reverse()
    {   
        Node *pre = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != NULL)
        {
            next = current->next;
            current->next = pre;
            pre = current;
            current = next;
        }
        return pre;
    }
    void reverse_display(Node*pre)
    {
        Node *temp = pre;
        while(temp)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"none"<<endl;

    }
};
int main()
{
    list l1;
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.display();
    Node*pre = l1.reverse();
    l1.reverse_display(pre);
    return 0;
}