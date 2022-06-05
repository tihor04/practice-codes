#include <bits/stdc++.h>

using namespace std;
int whenkzero(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        sum+=arr[i];

    }
    return sum;
}

 int whenkn(int arr[],int n)
 {
     int sum=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]<0)
         sum+=(-1)*arr[i];
         else 
         sum+=arr[i];
     }
     return sum;
 }

 int normalcase(int arr[],int n,int k)
 {
     vector<int> v;
     for(int i=0;i<n;i++)
     v.push_back((-1)*arr[i]);

     sort(v.begin(),v.end(),greater<int>());

     

       int maxsum=0;
     int i=0;
     while(i<v.size() && k>=0)
     {
         if(v[i]<=0)
         break;
         else
         {
         maxsum+=v[i];
         k--;
         }
         i++;
         
     }

     int p=v.size()-1;
     while(p>=0)
     {
         if(v[p]>0)
         break;
         else 
         maxsum+=(-1)*v[p];
         p--;
     }

     return maxsum;
 }

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(k==0)
        cout<<whenkzero(arr,n)<<endl;
        else if(k==n)
        cout<<whenkn(arr,n)<<endl;
        else 
        cout<<normalcase(arr,n,k)<<endl;

    }
    return 0;
}