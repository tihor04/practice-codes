#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

       int count=1;
       long long  res=0;
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]!=arr[i+1])
           {
               res+=(n-i-1)*2*count;
               count=1;
           }
           else
           {
               count++;
           }
       }

       cout<<res<<" ";
    }
    return 0;
}