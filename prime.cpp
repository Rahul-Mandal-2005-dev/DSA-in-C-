#include<iostream>
using namespace std;

int main(){
    int n = 10;
    bool prime ;
    for(int i = 0; i <= n ; i++){
        prime = true;
    for(int j = 2; j <= i-1 ; j++)
    {
        if (i%j==0)
        {
            prime = false;
        }
    }
    if (prime){

        cout<< i;
    }
    }
    return 0;
}