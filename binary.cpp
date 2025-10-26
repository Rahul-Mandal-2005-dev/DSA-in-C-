#include <iostream>
using namespace std;
bool cond = true;
void Binary_search(int arr[],int left, int right,int target,int length)
{
     for (int i = 0; i < length; i++)
    {   
        int mid = int(left + right)/2;
        if (arr[mid] == target)
        {
            cout <<"Element found: "<<mid;
            cond = false;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(cond)
    {
        cout<<"-1";
    }

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / 4;
    for(int i = 0; i < length; i++) 
    {
        cout <<arr[i]<<" ";
    }
    int target;
    cout<<"\ntarget:"; cin>>target ;
    int left = 0;
    int right = length - 1;
    Binary_search(arr,left,right,target,length);
   

    return 0;
}