#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int idx = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}
void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot_idx = partition(arr, start, end);
        quicksort(arr, start, pivot_idx - 1);
        quicksort(arr, pivot_idx + 1, end);
    }
}
int main()
{
    int arr[] = {9, 5, 8, 3, 7, 2, 6, 1};
    int start = 0, end = (sizeof(arr) / 4) - 1;
    for (int k = 0; k <=end; k++)
    {
        cout << arr[k] << " ";
    }
    quicksort(arr, start, end);
    cout << "\nsorted - " << endl;
    for (int k = 0; k <=end; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}