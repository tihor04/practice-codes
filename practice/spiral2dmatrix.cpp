#include "bits/stdc++.h"
using namespace std;
int main()
{
    cout<<"enter n and m";
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the array";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int strow=0;
    int endrow=n-1;
    int stcol=0;
    int endcol=m-1;
    while(strow<=endrow && stcol<=endcol)
    {
        int i=strow;
        int j=stcol;
        while(j<=endcol)
        {
            cout<<arr[i][j]<<" ";
            j++;
        }
         strow++;
        while(i<=endrow)
        {
            cout<<arr[i][j]<<" ";
            i++;
        }
         endcol--;
        while(j!=stcol)
        {
            cout<<arr[i][j]<<" ";
            j--;
        }
         endrow--;
        while(i!=strow-1)
        {
            cout<<arr[i][j]<<" ";
            i--;
        }
        stcol++;
       



    }
    return 0;
}