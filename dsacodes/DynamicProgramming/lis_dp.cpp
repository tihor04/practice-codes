#include <bits/stdc++.h>

using namespace std;


int lis(int arr[],int n)
{
    int list[n];
    list[0]=1;

    for(int i=1;i<n;i++)
    {
        list[i]=1;
        for(int j=0;j<i;j++)
        if(arr[i]>arr[j])
        list[i]=max(list[i],list[j]+1);
    }

    int res=list[0];
    for(int j=1;j<n;j++)
    res=max(res,list[j]);

    return res;
}

int main()
{

    int n=7;
    int arr[n]={4,10,6,8,11,2,20};
    cout<<lis(arr,n);
    return 0;
}