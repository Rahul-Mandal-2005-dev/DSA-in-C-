#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class singleLinklist
{
private:
    Node *head;

public:
    singleLinklist() : head(nullptr) {}

    Node *countNode(int value)
    {
        Node *newNode = new Node(value);
        return newNode;
    }

    void insert_end(int value)
    {
        Node *newNode = countNode(value);
        if (!head)
            head = newNode;
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
    void insert_head(int value)
    {
        Node *newNode = countNode(value);
        if (!head)
            head = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    int countingNode()
    {
        Node *temp = head;
        int count = 0;
        if (!temp)
            cout << "Nodes: " << count << endl;
        else
        {
            while (temp)
            {
                temp = temp->next;
                count++;
            }
            cout << "Nodes: " << count << endl;
        }
        return count;
    }
    int count()
    {
        Node *temp = head;
        int count = 0;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void insert_pos(int value, int pos)
    {
        Node *temp = head;
        int key = 1;
        Node *newNode = countNode(value);
        int len = count();
        if (pos <= 0)
            cout << "invalid position" << endl;
        else if (pos == 1)
        {
            newNode->next = temp;
            head = newNode;
        }
        else if (len >= pos)
        {
            while (temp->next && key < pos)
            {
                temp = temp->next;
                key++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
            cout << "Node len: " << len << "\tEnter pos: " << pos << endl;
    }
    void pop(int target)
    {
        if(!head && target == head->data)
        {

        }
    }
    void searching(int target)
    {
        Node *temp = head;
        int idx = 1;
        bool boolean = true;
        while (temp)
        {
            if (temp->data == target)
            {
                cout << "Target Index: " << idx << endl;
                boolean = false;
                return ;
            }
            else
            {
                temp = temp->next;
                idx++;
            }
        }
        if (boolean)
            cout << "Not Found" << endl;
    }
    void traverse()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};
int main()
{
    singleLinklist s1;
    s1.insert_end(10);
    s1.insert_end(20);
    s1.insert_end(30);
    s1.insert_head(1);
    s1.traverse();
    s1.insert_pos(2, 4);
    s1.traverse();
    s1.searching(2);

    return 0;
}