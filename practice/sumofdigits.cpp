#include "bits/stdc++.h"

using namespace std;

int digitsum(int n,int sum)
{
    if(n==0)
    return sum;
    int k=n%10;
    return digitsum(n/10,sum+k);
}
int main()
{

    int k=9999;
    cout<<digitsum(k,0);
    return 0;
}