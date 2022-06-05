#include "bits/stdc++.h"

using namespace std;

int  printfactors(int n)
{
    int i;
    int sum=0;
    for( i=1;i*i<=n;i++)
    {
        if(n%i==0)
        sum+=i;
    
    }

    for(;i>=1;i--)
    {
       if(n%i==0)
       sum+=n/i;
    }
    return sum;
    
}

int main()

{

    int sum=0;
for(int i=1;i<=4;i++)
{
    sum+=printfactors(i);


}

cout<<sum;
    return 0;
}