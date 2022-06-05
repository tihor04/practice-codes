#include "bits/stdc++.h"

using namespace std;

int findoccur(int arr[],int st,int end,int x)
{
    if(st>end)
    return -1;

    int mid=(st+end)/2;
    
     if(arr[mid]<x)
    return findoccur(arr,mid+1,end,x);
    else if(arr[mid]>x)
    return findoccur(arr,st,mid-1,x);
    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
        return mid;
        else
        return findoccur(arr,st,mid-1,x);
    }
}

int main()
{

    int arr[]={5,5,10,10,15,20,20,20,20};
    int n=9;
    int x=20;
    cout<<findoccur(arr,0,n-1,x);
    return 0;
}