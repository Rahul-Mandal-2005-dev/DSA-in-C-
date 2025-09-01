#include <iostream>
using namespace std;
#define SIZE 10
class Stack
{

    int arr[SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int data)
    {
        if (top >= SIZE)
            cout << "size is full";
        else
        {
            
            arr[++top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "No element is present";
        else
        {
            cout << "POP: " << arr[top]<<endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
            cout << "No element is present";
        else
        {
            int temp = top;
            while (temp != -1)
            {
                cout << arr[temp] << " ";
                temp--;
            }
        }
    }
};
int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    return 0;
}