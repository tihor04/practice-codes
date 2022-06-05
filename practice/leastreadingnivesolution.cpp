#include "bits/stdc++.h"
using namespace std;

int findminpages(int arr[],int n,int k)
{
  if(k==1)
  return sum(arr,0,n-1);

  if(n==1)
  return arr[0];

  int res=INT_MAX;

  for(int i=1;i<n;i++)
  {
      res=min(res,max(findminpages(arr,n,k-1),sum(arr,i,n-1)));

  }
  return res;
}

int sum(int arr[],int st,int end)
{
    int sum=0;
    for(int i=st;i<=end;i++)
    sum+=arr[i];
    return sum;
}
int main()
{

    int arr[]={10,20,30,40};
    int n=4;
    int k=2;
    cout<<findminpages(arr,n,k);
    return 0;
}