#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};
class DeletionFun
{
private:
    Node *head;
    Node *tail;

public:
    DeletionFun() : head(nullptr), tail(nullptr) {}
    void insert(int val)
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
    void delete_head()
    {
        Node *temp = head;
        if (!head)
        {
            cout << "No element" << endl;
        }
        head = head->next;
        cout << "del: " << temp->data << endl;
        delete temp;
    }
    void delete_tail()
    {
        if (!head)
            cout << "No element" << endl;
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
        cout << "del: " << tail->data << endl;
        delete tail;
        tail = temp;
    }
    void delete_data(int target_data)
    {
        if (!head)
            cout << "NO element" << endl;
        Node *temp = head;
        while (temp->next && temp->next->data != target_data)
        {
            temp = temp->next;
        }
        Node *deltemp = temp->next;
        cout << "del: " << deltemp->data << endl;

        temp->next = temp->next->next;
        delete deltemp;
    }
    void delete_idx(int target_idx)
    {
        if (!head)
            cout << "NO element" << endl;
        Node *temp = head;
        if (target_idx == 1)
        {
            Node *deltemp = head;
            cout << "del: " << head->data << endl;
            head = head->next;
            delete deltemp;
        }
        else
        {

            for (int i = 2; i < target_idx; i++)
            {
                temp = temp->next;
            }

            Node *deltemp = temp->next;
            cout << "del: " << deltemp->data << endl;

            temp->next = temp->next->next;
            delete deltemp;
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
};
int main()
{
    DeletionFun d1;
    d1.insert(10);
    d1.insert(20);
    d1.insert(30);
    d1.insert(40);
    d1.insert(50);
    d1.insert(60);
    d1.display();
    d1.delete_head();
    d1.display();
    d1.delete_tail();
    d1.display();
    d1.delete_data(40);
    d1.display();
    d1.delete_idx(1);
    d1.display();
    return 0;
}