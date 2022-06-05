#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dp[5];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    
    for(int i=3;i<=4;i++)
    {
        dp[i]=0;
       for(int j=0;j<i;j++)
       dp[i]+=dp[j]*dp[i-j-1];
    }
cout<<dp[4];
    return 0;
}