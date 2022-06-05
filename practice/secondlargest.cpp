#include "bits/stdc++.h"

using namespace std;

int secondlargest(int arr[],int n)
{
    if(n==1)
    return -1;

    int max=0;
    int secmax=INT_MIN;
    int secmaxindex=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[max])
        max=i;
        else if(arr[i]<arr[max] && arr[i]>secmax)
        {
            secmax=arr[i];
            secmaxindex=i;

         }
    }
    return secmaxindex;
}

int main()
{

    int arr[]={22,11,21,3,4};
    int n=5;
    cout<<secondlargest(arr,n);
    return 0;
}