#include "bits/stdc++.h"

using namespace std;

void printprime(int n)
{
    bool arr[n+1]={false};
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==false)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                 arr[j]=true;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(arr[i]==false)
        cout<<i<<" ";
    }
}

int main()
{

    int n=56;
    printprime(n);
    return 0;
}