#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n=4;
    int arr[n][n];
    cout<<"enter the array";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the key";
    cin>>key;
    int j=0;
    bool ans=false;
    int r=0;
    int c=n-1;
    while(r<n && c<n)
    {
        if(arr[r][c]==key)
        {
            ans=true;
            break;
        }
        else if(arr[r][c]<key)
        {
            r++;
        }
        else
        c--;
    }
  
cout<<ans;


    return 0;
}