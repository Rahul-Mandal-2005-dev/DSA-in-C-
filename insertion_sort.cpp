#include <iostream>
using namespace std;
void swap(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()

{
    int arr[] = {9, 45, 3, 86, 41, 54, 22};
    int n = sizeof(arr) / 4;

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout<<"\nsorted - "<<endl;
    swap(arr,n);

    return 0;
}