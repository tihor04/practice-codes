#include <bits/stdc++.h>

using namespace std;

int findans(int n,int k,int s)
{
    
    int arr[n];
    int sum=0;
    for(int i=0;i,n;i++)
    {
        arr[i]=2*i+1;
        sum+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(sum+(k-1)*arr[i]==s)
        return arr[i];
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n, k ,s;
        cin>>n>>k>>s;
        if(n==1)
        cout<<1<<endl;
        else 
        cout<<findans(n,k,s)<<endl;
    }
    return 0;
}