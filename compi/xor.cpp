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

        long long arr[n];
        long long m=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>m)
            m=arr[i];
        }

        long long r=0;
        for(int i=0;i<n;i++)
        {
            r= r|(arr[i]^m);
        }

        cout<<m<<" "<<r<<endl;


    }
    return 0;
}