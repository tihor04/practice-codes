#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t-->0)
    {
        long long n,m;
        cin>>n>>m;

        vector<pair<int ,int>>  v;

        for(int i=0;i<m;i++)
        {
            long long x,y;
            cin>>x>>y;
        v.push_back({x,y});

        }

        sort(v.begin(),v.end(),greater<pair<int,int>>());
        long long   l=1;
        long long r=n;
        long long ans=0;
        for(int i=0;i<m && r>0;i++)
        {
            long long a1=v[i].first;
            long long a2=v[i].second;
            l=l*a2/__gcd(l,a2);
            ans+=((r-n)/l)*a1;  
            r=n/l;
        }

        cout<<ans<<endl;
    }
    return 0;
}