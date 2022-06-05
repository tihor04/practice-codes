#include "bits/stdc++.h"

using namespace std;


int setbit(int a, int posi)
{
    return (a &(1<<posi))!=0;
}

int main()
{
    int n=6;
    int arr[n]={2,4,5,1,2,4};

    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int temp=xorsum;

    int std=0;
    int posi=0;
    while(std!=1)
    {
        std=xorsum&1;
        posi++;
        xorsum=xorsum>>1;

    }
    int newxor=0;

    for(int i=0;i<n;i++)
    {
        if(setbit(arr[i],posi-1))
        {
            newxor=newxor^arr[i];
        }
    }

    cout<<newxor<<" ";
    int k=temp^newxor;
    cout<<k<<" ";


    return 0;
}