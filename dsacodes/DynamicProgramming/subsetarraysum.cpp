#include <bits/stdc++.h>

using namespace std;

int subarr(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }

    for(int i=1;i<=sum;i++)
    {
        dp[0][i]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<arr[i-1])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
            }
        }
    }

    return dp[n][sum];
}

int main()
{

    int n=5;
    int arr[n]={10,5,2,3,6};
    int sum=8;
    cout<<subarr(arr,n,sum);
    return 0;
}