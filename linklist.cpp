#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class linklist
{
private:
    Node *head;
    Node *tail;

public:
    linklist()
    {
        head = tail = NULL;
    }
    void pushfront(int value)
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
    void pushback(int value)
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
    void insert(int value, int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid position" << endl;
        }
        else
        {
            if (pos == 1)
            {
                pushfront(value);
            }
            else
            {
                Node *newNode = new Node(value);
                Node *temp = head;
                for (int i = 0; i < pos - 1; i++)
                {
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void popfront()
    {
        Node *temp = head;
        cout << "POP: " << temp->data << endl;
        head = temp->next;
        delete temp;
    }
    void popback()
    {
        Node *temp = head;
        while (temp->next != tail) // or temp->next->next == NULL
        {
            temp = temp->next;
        }
        cout << "POP: " << temp->next->data << endl;
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void search(int target)
    {
        Node *temp = head;
        int position = 0;
        bool condition = true;
        while (temp != NULL)
        {
            position++;
            if (temp->data == target)
            {
                cout << "Index: " << position<<endl;
                condition = false;
                break;
            }
            temp = temp->next;
        }
        if (condition)
        {
            cout << "Index: -1"<<endl;
        }
    }
};
int main()
{
    linklist l1;
    l1.pushback(30);
    l1.pushback(40);
    l1.pushfront(20);
    l1.pushfront(10);
    l1.insert(100, 3);
    l1.display();
    l1.popfront();
    l1.display();
    l1.popback();
    l1.display();
    l1.search(30);

    return 0;
}