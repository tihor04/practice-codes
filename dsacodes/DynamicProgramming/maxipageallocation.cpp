#include <bits/stdc++.h>

using namespace std;

int sum(int arr[],int i,int j)
{
    int sum=0;
    for(int p=i;i<=j;i++)
    {
    sum+=arr[p];
    }
    return sum;
}

int minpage(int arr[],int n,int k)
{
    int dp[k+1][n+1];

    for(int i=1;i<=n;i++)
    {
        dp[1][i]=sum(arr,0,i-1);
    }
    
    for(int i=1;i<=k;i++)
    dp[i][1]=arr[0];

    for(int i=2;i<=k;i++)
    {
        for(int j=2;j<=n;j++)
        {
            dp[i][j]=INT_MAX;
            for(int p=1;p<j;p++)
            dp[i][j]=min(dp[i][j],max(dp[i-1][p],sum(arr,p,j-1)));
        }
    }

    return dp[k][n];
}

int main()
{
    int n =4;
    int arr[n]={10,20,30,40};
    int k=2;
    cout<<minpage(arr,n,k);
    return 0;
}