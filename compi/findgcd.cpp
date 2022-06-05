#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long  x,y;
        cin>>x>>y;

        if(y%x==0)
        {
            cout<<0<<endl;
            continue;
        }

        int mini=1;
        while((y+mini)%x!=0)
        mini++;

        int k=mini;

        mini=1;

        while(y%(x+mini)!=0)
        mini++;

        k=min(mini,k);

        cout<<k<<endl;
        
        

        
    }
    return 0;
}