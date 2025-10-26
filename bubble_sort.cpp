#include <iostream>
using namespace std;
void swap(int arr[],int n)
{
   for(int i = 0; i < n - 1;i++)
  {
    for(int j = 0 ; j < n-1-i;j++)
    {
      if (arr[j+1] < arr[j])
      {
        swap(arr[j+1],arr[j]);
      }
    }
  }
  for(int k = 0;k<n;k++)
  {
    cout<<arr[k]<<" ";
  }
}
int main()
{
  int arr[] = {9,45,3,86,41,54,22};
  int n = sizeof(arr)/4;
   for(int k = 0;k<n;k++)
  {
    cout<<arr[k]<<" ";
  }
  cout<<"\nsorted - "<<endl;
  swap(arr,n);


  // int arr[] = {9, 45, 3, 86, 41, 54, 22};
  // int n = sizeof(arr) / 4;
  // bool cond = true;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (arr[j] < arr[i])
  //     {
  //       swap(arr[i], arr[j]);
  //     }
  //   }
  // }
  // for (int k = 0; k < n; k++)
  // {
  //   cout << arr[k] << " ";
  // }

  // string name[] = {"rahul", "mandal", "rahul"};
  // int n = sizeof(name) / sizeof(name[0]);
  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = 0; j < n - 1 - i; j++)
  //   if(name[j] > name[j+1])
  //   {
  //     swap(name[j],name[j+1]);
  //   }
  // }
  // for (int k = 0; k < n; k++)
  // {
  //   cout << name[k] << " ";
  // }
  return 0;
}