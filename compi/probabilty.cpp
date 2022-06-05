#include "bits/stdc++.h"

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int x,y;
        cin>>x>>y;

        if(x+y>=6)
        cout<<0<<endl;
        else
        {
           double d=6-x-y;
           double ans=d/6;
           cout<<ans<<endl;
        }
    }
    return 0;
}