#include "bits/stdc++.h"

using namespace std;
bool islucky(int n)
{
    static int count=2;
    int np=n;
    if(count>n)
    return 1;
    if(n%count==0)
    return 0;
    
    np-=np/count;
    count++;
    return islucky(np);
}
int main()
{
    int n=74;
    cout<<islucky( n);
    return 0;
}