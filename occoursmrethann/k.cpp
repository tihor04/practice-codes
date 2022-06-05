#include "bits/stdc++.h"

using namespace std;

void findoccourance(int arr[],int n,int k)
{
    unordered_map<int,int> s;

    for(int i=0;i<n;i++)
    s[arr[i]]++;

    for( auto x:s)
    {
        if(x.second>n/k)
        cout<<x.first<<" ";
    }
}

int main()
{
    int arr[]={30,10,20,30,30,40,30,40,30};
    int n=9;
    int k=2;
    findoccourance(arr,n,k);
    return 0;
}