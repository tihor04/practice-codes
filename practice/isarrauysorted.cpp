#include "bits/stdc++.h"
using namespace std;

bool issorted(int arr[],int n)
{
    if(n==1)
    {
        return true;

    }
    bool prev=issorted(arr+1,n-1);
    return (arr[0]<=arr[1] && prev);
}

int main()
{
    int n=5;
    int arr[n]={1,2,9,4,5};
    cout<<issorted(arr,n);
    return 0;

}