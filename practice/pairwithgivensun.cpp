#include "bits/stdc++.h"
using namespace std;

bool pairsum(int arr[],int n,int k)
{
    unordered_set<int> s;
   
   for(int i=0;i<n;i++)
   {
       if(s.find(k-arr[i])!=s.end())
       return true;
       else
       s.insert(arr[i]);
   }
    return false;
}


int main()
{
    int arr[]={12,11,5,11,3,1};
    int k=17;
    cout<<pairsum(arr,6,k);
    return 0;
}