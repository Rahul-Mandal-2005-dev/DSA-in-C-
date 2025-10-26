#include <iostream>
using namespace std;
void swap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smaller = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smaller] > arr[j])
            {
                smaller = j;
            }
        }
        swap(arr[i], arr[smaller]);
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
    cout << "\nsorted - " << endl;
    swap(arr,n);
    return 0;
}