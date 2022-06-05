#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> pre(1e6+1,0);

void comp(){

    pre[1]=1;

    pre[2]=2;

    for(ll i=3;i<=1e6;i++){

        pre[i]=pre[i-1]+i-1;

    }

}

void solve()
{
   ll k;

    cin>>k;

    ll pos=lower_bound(pre.begin(),pre.end(),k+1)-pre.begin()-1;

    cout<<2*pos<<" ";

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