#include "bits/stdc++.h"
using namespace std;
 
 bool findzerosum(int arr[],int n)
 {
     unordered_set<int> s;
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum+=arr[i];
         if(s.find(sum)!=s.end())
         return true;
         if(sum==0)
         return true;
         s.insert(sum);
     }

     return false;
 }
int main()
{
    int arr[5]={1,4,-1,-3,4};
    cout<<findzerosum(arr,5);
    return 0;
}