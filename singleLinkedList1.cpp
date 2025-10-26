#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};
class SingleLinkedList
{
    Node *head;

public:
    SingleLinkedList() : head(nullptr) {}

    Node *createNode(int value)
    {
        Node *newNode = new Node(value);
        return newNode;
    }

    void insert_end(int value)
    {
        Node *newNode = createNode(value);
        if (!head)
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
    void pop(int target)
    {
        if (!head)
        {
            cout << "Empty";
            return;
        }
        if (head->data == target)
        {
            Node *temp = head;
            head = temp->next;
            delete temp;
        }
        Node *temp = head;
        while (temp->next && temp->next->data != target)
        {
            temp = temp->next;
        }
        if (temp->next)
        {
            Node *todelete = temp->next;
            temp->next = temp->next->next;
            delete todelete;
        }
    }
    void search(int value)
    {
        Node *temp = head;
        int pos = 1;
        bool boolean = true;
        while (temp)
        {
            if (temp->data == value)
            {
                cout << "Pos: " << pos << endl;
                boolean = false;
                return;
            }
            else
            {
                temp = temp->next;
                pos++;
            }
        }
        if (boolean)
        {
            cout << "Target not found" << endl;
        }
    }
    void sort()
    {
        if (!head || !head->next)
        {
            return;
        }
        for (Node *i = head; i->next; i = i->next)
        {
            for (Node *j = head; j->next; j = j->next)
            {
                swap(j->data, j->next->data);
            }
        }
    }

    void concatenate(SingleLinkedList &other)
    {
        if (!head)
        {
            head = other.head;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = other.head;
            other.head = nullptr;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp->next)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "None" << endl;
    }
};
int main()
{
    SingleLinkedList list1, list2;
    int choice, value;
    do
    {
        cout << "Menu: " << endl;
        cout << "1.insert end" << endl
             << "2.Delete by value" << endl
             << "3.display" << endl
             << "4.search" << endl
             << "5.sort" << endl
             << "6.conc" << endl
             << "7.Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Value: ";
            cin >> value;
            list1.insert_end(value);
            break;
        case 2:
            cout << "Target: ";
            cin >> value;
            list1.pop(value);
            break;
        case 3:
            list1.display();
            break;
        case 4:
            cout << "Target: ";
            cin >> value;
            list1.search(value);
            break;
        case 5:
            list1.sort();
            break;
        case 6:
            cout << "Enter -1 to stop" << endl;
            while (true)
            {
                cout << "value: ";
                cin >> value;
                if (value == -1)
                {
                    break;
                }
                list2.insert_end(value);
            }
            list1.concatenate(list2);
            break;
        case 7:
            cout << "Exit" << endl;
            break;

        default:
            cout << "invalid choice" << endl;
            break;
        }
    } while (choice != 7);

    return 0;
}