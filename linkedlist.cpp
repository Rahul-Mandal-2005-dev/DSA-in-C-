#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};
class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList() : head(NULL), tail(NULL) {}

    void pushfront(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            (*newNode).next = head;
            head = newNode;
        }
    }
    void pushback(int value)
    {
        Node *newNode = new Node(value);
        if (tail == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pushmiddle(int value, int pos)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void popfront()
    {
        Node *temp = head;
        cout << "POP: " << temp->data << endl;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    void poptail()
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        cout << "POP: " << temp->next->data << endl;
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void searching(int target)
    {
        Node *temp = head;
        int count = 0;
        while (head != NULL)
        {
            count++;
            bool boolvalue = true;
            if (temp->data == target)
            {
                cout << "data: " << temp->data << "\tindex: " << count;
                boolvalue = false;
                break;
            }
            if (boolvalue)
            {
                cout << "element not exist" << endl;
            }
        }
    }
};
int main()
{
    LinkedList l1;
    l1.pushfront(30);
    l1.pushfront(20);
    l1.pushfront(10);
    l1.pushback(40);
    l1.pushback(50);
    l1.display();
    l1.popfront();
    l1.poptail();
    l1.display();
    l1.pushmiddle(100, 2);
    l1.display();
    l1.searching(20);

    return 0;
}