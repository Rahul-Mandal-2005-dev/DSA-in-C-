#include <iostream>
#define SIZE 100
using namespace std;
class Stack
{
private:
    int top = -1;
    int arr[SIZE];

public:
    void Push(int value)
    {
        if (top > SIZE)
        {
            cout << "Stack is full\n";
        }
        else
        {
            arr[++top] = value;
        }
    }
    void Pop()
    {
        if (top < 0)
        {
            cout << "Stack has no element\n";
        }
        else
        {
            cout << "Value Remove: " << arr[top];
            top--;
        }
    }
    void Peek()
    {
        if (top < 0)
        {
            cout << "Stack has no element\n";
        }
        else
        {
            cout << "Top element : " << arr[top];
        }
    }
    void Display()
    {
        if (top < 0)
        {
            {
                cout << "Stack has no element\n";
            }
        }
        else
        {
            cout << "stack - ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << "\t";
            }
        }
    }
};

int main()
{
    int method;
    Stack s1;

    do
    {
        cout << "\n1.Push" << endl
             << "2.Pop" << endl
             << "3.Peek" << endl
             << "4.Display" << endl
             << "5.Exit" << endl;
        cout << "Enter the method: ";
        cin >> method;
        switch (method)
        {
        case 1:
            int value;
            cout << "Enter the value: ";
            cin >> value;
            s1.Push(value);
            break;
        case 2:
            s1.Pop();
            break;
        case 3:
            s1.Peek();
            break;
        case 4:
            s1.Display();
            break;
        case 5:
            cout << "Exit";
            break;
        default:
            cout << "Invalid method";
            break;
        }
    } while (method != 5);

    return 0;
}