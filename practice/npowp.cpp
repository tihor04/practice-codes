#include "bits/stdc++.h"
using namespace std;

int nppow(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prev=nppow(n,p-1);
    return n*prev;
}

int main()
{
    int n=2;
    int p=4;
    cout<<nppow(n,p)<<endl;
    return 0;
}