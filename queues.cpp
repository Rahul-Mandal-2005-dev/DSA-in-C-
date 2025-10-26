#include <iostream>
#define n 100
using namespace std;
int arr[n];
class Queues
{
private:
    int front, tail;

public:
    Queues()
    {
        front = -1;
        tail = -1;
    }
    void enqueues(int value)
    {
        if (front == -1)
        {
            front++;
            tail++;
            arr[tail] = value;
            cout << "First element push: " << arr[tail]<<endl;
        }
        else
        {   tail++;
            arr[tail] = value;
            cout << "element push: " << arr[tail]<<endl;
        }
    }
    void dequeues()
    {
        cout << "element pop: " << arr[front]<<endl;
        front++;
    }
    void display()
    {
        for (int i = front; i <=tail; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
   Queues q1;
   q1.enqueues(10);
   q1.enqueues(20);
   q1.enqueues(30);
   q1.enqueues(40);
   q1.display();
   q1.dequeues();
   q1.display();
    return 0;
}