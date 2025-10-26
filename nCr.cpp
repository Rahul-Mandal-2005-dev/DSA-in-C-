#include<iostream>
#include<vector>
using namespace std;
int fact(int x)
{   if (x == 1 or x == 0)
    {
        return 1;
    }
    
    return x*fact(x-1);
}
int solve(int n , int r)
{
    int solution = fact(n)/(fact(r)*fact(n-r));
    cout<<"solution:"<<solution;
}
int main()
{
    // int n , r;
    // cout<<"enter n: ";
    // cin>>n;
    // cout<<"enter r: ";
    // cin>>r;
    // solve(n,r);

return 0;
}