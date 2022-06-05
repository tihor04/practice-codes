#include <bits/stdc++.h>

using namespace std;

int getmin(int coin[], int n,int val)
{
    int dp[val+1];
    dp[0]=0;
    
    for(int i=1;i<=val;i++)
    dp[i]=INT16_MAX;

    for(int i=1;i<=val;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coin[j]<=i)
            {
                int subres=dp[i-coin[j]];
                if(subres!=INT_MAX)
                dp[i]=min(dp[i],subres+1);
            }
        }
    }

    return dp[val];
}

int main()
{
    int n=4;
    int coins[n]={9,6,5,1};
    int val=11;
    cout<<getmin(coins,n,val);
    return 0;
}