#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int mii=min(a,b,c);
        if(mii==c)
        cout<<"Alice"<<endl;
        else if(mii==b)
        cout<<"Bob"<<endl;
        else 
        cout<<"Draw"<<endl;
    }
    return 0;
}