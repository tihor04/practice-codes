#include "bits/stdc++.h"

using namespace std;

void findtworepeating(int arr[],int n)
{
    int x;

    for(int i=1;i<=n;i++)
    {
        x=x^i;
    }

    for(int i=0;i<n+2;i++)
    {
        x=x^arr[i];
    }

    int sn=x&(x-1);

    int res1,res2;

    for(int i=1;i<=n;i++)
    {
        if(i&sn)
        res1=res1^i;
        else 
        res2=res2^i;
    }

    for(int i=0;i<n+2;i++)
    {
        if(arr[i]&sn)
        res1=res1^arr[i];
        else 
        res2=res2^arr[i];
    }

    cout<<res1<<" "<<res2;


    


}

int main()
{
    int arr[]={1,1,2,2};
    int n=2;
    findtworepeating(arr,n);
    return 0;
}