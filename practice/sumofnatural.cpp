#include "bits/stdc++.h"

using namespace std;

int sum(int n,int k)
{
    if(n==0)
    return k;
    return sum(n-1,k+n);

}

int main()
{
    int n=10;
    cout<<sum(n,0);
    return 0;
}