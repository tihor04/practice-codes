#include "bits/stdc++.h"

using namespace std;

int maxsum(int arr[],int n,int k)
{
    int basesum=0;

    for(int i=0;i<k;i++)
    basesum+=arr[i];
     
     int maxsum=basesum;
     

     for(int i=1;i<n;i++)
     {
         basesum+=arr[i+k-1]-arr[i-1];
         maxsum=max(basesum,maxsum);
     }
    return maxsum;
}

int main()
{
    int arr[]={1,8,30,-5,20,7};
    int n=6;
    int k=3;
  cout<<maxsum(arr,n,k);
    return 0;
}