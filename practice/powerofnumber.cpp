#include "bits/stdc++.h"

using namespace std;

long long power(int N,int R)
{
     long long p=1000000007;
       long long temp=power(N,R/2)%p;
       if(R==0)
       return 1;
       else if(R%2==0)
       return temp*temp;
       else 
       return (N%p)*temp*temp;
        
}

int main()
{
    int n=12;
    int r=21;
    cout<<power(n,r);
    return 0;
}