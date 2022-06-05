#include "bits/stdc++.h"
using namespace std;

int normalmaxsum(int arr[],int n)
{
    int res=arr[0];
    int maxsum=arr[0];

    for(int i=1;i<n;i++)
    {
        maxsum=max(maxsum+arr[i],arr[i]);
        res=max(res,maxsum);
    }
    return res;
}

int findmaxsum(int arr[] ,int n)
{
    int max_normal=normalmaxsum(arr,n);
    if(max_normal<0)
    return 0;
    int arrsum=0;

    for(int i=0;i<n;i++)
    {
        arrsum+=arr[i];
        arr[i]=-arr[i];
    }

    int maxcircular=arrsum + normalmaxsum(arr,n);

    return max(maxcircular,max_normal);
}

int main()
{
    int arr[]={8,-2,-2,1,4};
    int n=5;
    cout<<findmaxsum(arr,n);
 return 0;
}