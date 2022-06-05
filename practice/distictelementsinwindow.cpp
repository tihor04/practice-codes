#include "bits/stdc++.h"

using namespace std;

void findwindow(int arr[],int n,int k)
{
    map<int,int> s;

    for(int i=0;i<k;i++)
    {
        s[arr[i]]++;

    }

    cout<<s.size()<<" ";

    for(int i=k;i<n;i++)
    {
        s[arr[i-k]]--;

        if(s[arr[i-k]]==0)
        s.erase(arr[i-k]);

        s[arr[i]]++;

        cout<<s.size()<<" ";
    }
}

int main()
{
    int arr[]={10,20,20,2,1,1,2};
    int n=7;
    int k=4;
    findwindow(arr,n,k);
    return 0;
}