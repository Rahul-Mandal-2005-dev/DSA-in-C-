#include <iostream>
#include <string.h>
using namespace std;
const int size = 8;
int arr[size];
bool cond = true;
void Input(int arr[])
{
  for (int i = 0; i < size; i++)
  {
    cout << "arr " << i + 1<<" -";
    cin >> arr[i];
  }
}

void Print(int arr[])
{
  for (int i = 0; i < size; i++)
  {
    cout <<arr[i]<<" ";
  }
}
void Display(int arr[], int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      cout <<"\ntarget found: "<<i;
      cond = false;
      break;
    }
  }
}



int main()
{
  Input(arr);
  int target;
  cout << "target: ";
  cin >> target;
  Print(arr);
  Display(arr,target);
  return 0;
}