#include "bits/stdc++.h"

using namespace std;

int equalszero(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      arr[i]=-1;
   }

   unordered_map<int,int> s;

   int res=0,sum=0;

   for(int i=0;i<n;i++)
   {
     sum+=arr[i];
     if(sum==0)
     res=i+1;

     if(s.find(sum)!=s.end())
     {
         if(res<i-s[sum])
         res=i-s[sum];
     }
     else
    s[sum]=i;
   }

   return res;
}

int main()
{
    int arr[]={1,0,1,0,1};
    int n=5;
    cout<<equalszero(arr,n);
    return 0;
}