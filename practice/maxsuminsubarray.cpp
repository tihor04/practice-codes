#include "bits/stdc++.h"

using namespace std;
int findmax(int arr[],int n)
{

    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
       maxend=max(maxend+arr[i],arr[i]);
       res=max(res,maxend);
    }
    return res;
}

int main()
{
    int arr[]={-5,1,-2,3,-1,2,-2};
    int n=7;
    cout<<findmax(arr,n);
    return 0;
}