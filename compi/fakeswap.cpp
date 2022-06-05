#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

void solve()
{
    ll n;
    string s;
    string p;
    cin>>n;
    cin>>s>>p;
    if(s==p)
    {
        cout<<"YES"<<endl;
        return ;
    }
    int zero=0,one=1;
    for(int i=0;p.size();i++)
    {
        if(p[i]=='0')
        zero++;
        else
        one++;
    }

    if(zero==0 || one==0)
    {
        cout<<"NO"<<endl;
        return;

    }
    else
    {
        cout<<"YES"<<endl;
        return;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}