#include <bits/stdc++.h>

using namespace std;

bool ispalin(string str,int i,int j)
{
    if(i==j)
    return true;

    while(i<j)
    {
        if(str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;
}
int palin(string str)
{
    int n=str.length();

    int dp[n][n];

    for(int i=0;i<n;i++)
    {
        dp[i][i]=0;
    }

    for(int gap=1;gap<n;gap++)
    {
        for(int i=0;i+gap<n;i++)
        {
            int j=i+gap;

            if(ispalin(str,i,j))
            dp[i][j]=0;
            else
            {
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                }
            }
        }
    }

    return dp[0][n-1];
}

int main()
{
    string str="abbabbc";
    cout<<palin(str);
    return 0;

}