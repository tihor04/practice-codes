#include "bits/stdc++.h"
using namespace std;

int majorityelement(int arr[],int n)
{
    int res=0;
    int count=1;

    //finding index of maximum occouring element
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else 
        count--;
        if(count==0)
        res=i;count=1;
    }

    //finding the maximum number 

    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
    }
    if(count<=n/2)
    res=-1;

    return res;
}

int main()
{
    int arr[]={8,6,4,8,8};
    int n=5;
    cout<<majorityelement(arr,n);
    return 0;
}