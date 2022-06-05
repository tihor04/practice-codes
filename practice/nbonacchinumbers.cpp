#include "bits/stdc++.h"

using namespace std;

void printnbonacchi(int n,int m)
{
    if(n>m)
    {
        cout<<"all zeros";
    }
    int arr[m];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=0;
    }
    arr[n-1]=1;
    int sum=1;
    for(int i=n;i<m;i++)
    {
         arr[i]=sum;
         sum+=arr[i];
         sum-=arr[i-n];
    }

    //printing the array

    for(int i=0;i<m;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int n=3;
    int m=8;
    printnbonacchi(n,m);
    return 0;
}