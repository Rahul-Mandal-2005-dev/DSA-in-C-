#include <iostream>
#include <vector>
using namespace std;
void sorting(vector<int> &arr, int start, int mid, int end)
{
  vector<int> temp;
  int i = start, j = mid + 1;
  while (i <= mid && j <= end)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i]);
      i++;
    }
    else
    {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while (i <= mid)
  {
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= end)
  {
    temp.push_back(arr[j]);
    j++;
  }
  for (int idx = 0; idx < temp.size(); idx++)
  {
    arr[idx + start] = temp[idx];
    
  }
}
void merge_sort(vector<int> &arr, int start, int end)
{
  if (start < end)
  {
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    sorting(arr, start, mid, end);
  }

}
int main()
{
  vector<int> arr = {7, 8, 4, 5, 9, 2, 3, 6};
  int start = 0;
  int end = arr.size() - 1;
  for (int i = 0; i < end; i++)
  {
    cout << arr[i] << " ";
  }
  merge_sort(arr, start, end);
  cout<<"\nsorted - "<<endl;
  for (int i = 0; i < end; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}