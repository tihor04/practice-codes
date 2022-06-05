#include "bits/stdc++.h"

using namespace std;


void findfactors(int n)
{
    int devisor[100];

    for(int i=2;i<=n;i++)
    {
        devisor[i]=i;
    }

    for(int i=2;i<=n;i++)
    {
        if(devisor[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
               if(devisor[j]==j)
               devisor[j]=i;
            }
        }
    }

    //to factorise the given number n

    while(n!=1)
    {
    cout<<devisor[n]<<" ";
    n=n/devisor[n];
    }
}

int main()
{
    int n=52;
    findfactors(n);
    return 0;
}