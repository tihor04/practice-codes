#include "bits/stdc++.h"

using namespace std;

int findindex(int arr[],int st,int end,int k)
{
    if(st>end)
    return -1;
    int mid=(st+end)/2;
    if(arr[mid]==k)
    return mid;
    else if(arr[mid]<k)
    {
        return findindex(arr,mid+1,end,k);
    }
    else
    return findindex(arr,st,mid-1,k);

}


int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int k=60;
    cout<<findindex(arr,0,n-1,k);
    return 0;

}