#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
        ll x;cin>>x;
    ll a = x,b = 0,c = x;
    for(ll i=0;i<31;i++) {
        if(!(c&((ll)1<<i))) {
            c = c | ((ll)1<<i);
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
   
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


  int t;
  cin>>t;


  while(t-->0) 
  solve();

 return 0;
}