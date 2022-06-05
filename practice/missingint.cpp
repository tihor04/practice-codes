#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n=5;
    int arr[5]={0,1,-1,3,-11};

 const int N=1e6+2;
 bool check[N];
 for(int i=0;i<N;i++)
 {
     check[i]=false;
 }

 for(int i=0;i<n;i++)
 {
     if(arr[i]>=0)
     {
         check[arr[i]]=true;
     }
 }

 int ans=-1;

 for(int i=0;i<N;i++)
 {
     if(check[i]==false)
     {
         ans=i;
         break;
     }
 }
 cout<<ans<<endl;
    return 0;
}