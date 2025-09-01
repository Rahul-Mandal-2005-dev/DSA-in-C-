#include <iostream>
using namespace std;
#define SIZE 10

class Queues
{
private:
    int head, tail;
    int arr[SIZE];

public:
    Queues() : head(-1), tail(-1) {}

    void push(int data)
    {
        if (tail >= SIZE)
            cout << "size is full";
        else if (head = -1)
        {
            head++;
            tail++;
            arr[tail] = data;
        }
        else
        {
            arr[++tail] = data;
        }
    }
    void pop()
    {
        if (head == -1)
            cout << "No element is present";
        else
        {
            cout << "POP: " << arr[head] << endl;
            head++;
        }
    }

    void display()
    {
        if (head == -1)
            cout << "No element is present";
        else
        {
            int temp = head;
            for(int i = temp; i <=tail;i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
int main()
{
    Queues s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    return 0;
}