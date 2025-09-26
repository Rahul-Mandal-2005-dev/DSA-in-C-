#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};
class InsertionFun
{
    Node *head;
    Node *tail;

public:
    InsertionFun()
    {
        head = tail = NULL;
    }

    void insert_head(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void insert_tail(int val)
    {
        Node *newNode = new Node(val);
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
    void insert_pos(int val, int pos)
    {
        Node *newNode = new Node(val);
        int idx = 2;
        if (!head)
        {
            head = tail = newNode;
        }
        if (head && pos == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {

            Node *temp = head;
            while (temp->next && idx != pos)
            {
                temp = temp->next;
                idx++;
            }
            newNode->next = temp->next;
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
        cout << "None" << endl;
    }
};
int main()
{
    InsertionFun i1;
    i1.insert_head(30);
    i1.insert_head(20);
    i1.insert_head(10);
    i1.display();
    i1.insert_tail(40);
    i1.insert_tail(50);
    i1.insert_tail(60);
    i1.display();
    i1.insert_pos(100, 3);
    i1.insert_pos(1100, 1);
    i1.display();
    return 0;
}