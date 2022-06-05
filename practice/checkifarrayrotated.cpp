#include "bits/stdc++.h"

using namespace std;

bool findifrotated(int arr[],int n){
    int i=0;
    int min=arr[0];
    for(;i<n-1;i++)
    {
       if(arr[i]>arr[i+1])
       break;
    }

    if(i==n-1)
    {
        if(arr[i]<min)
        return true;
        else
        return false;
    }

    for(;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        return false;
    }
    return  true;
}

int main()
{
    int arr[]{1,2,3};
    int n=3;
    cout<<findifrotated(arr,n);
    return 0;
}