#include "bits/stdc++.h"

using namespace std;

int countpath(int st,int end)
{
    if(st==end)
    {
        return 1;

    }
    if(st>end)
    return 0;
    int count=0;
    for(int i=1;i<=6;i++)
    {
        int k=countpath(st+i,end);
        count+=k;
    }
    return count;
}

int main()
{
    cout<<countpath(0,3);
  return 0;
}