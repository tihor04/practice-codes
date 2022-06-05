#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[],int n)
{
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    dp[i]=INT_MAX;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]+j>=i)
            {
                if(dp[j]!=INT_MAX)
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }

    return dp[n-1];
}
int main()
{
   int n=6;
    int arr[n]={1,4,3,2,6,7};

    cout<<findmin(arr,n);

    return 0;

}