#include "bits/stdc++.h"

using namespace std;

long fact(int n)
{
if(n==1)
return 1;
long prev=fact(n-1);
return n*prev;
}
int noofzero(long fact)
{
  
   int  z=5;
   int count=0;

    while(fact/z>=1)
    {
        count+=fact/z;
        z=z*5;
    }
    return count;
}
int main()
{
    int n=22;
    long factr=fact(n);
    cout<<factr<<endl;
    cout<<noofzero(n);
    return 0;
}