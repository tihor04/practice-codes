#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
   string a;
   string s;
   cin>>a>>s;
 
  ll x=a.size();
  ll y=s.size();
  if(y==1&& s[0]=='a')
  {
      cout<<1<<endl;
      return;
  }
  
  ll i=0;
  for(ll j=0;j<y;j++)
  {
      if(s[j]=='a'){
cout<<-1<<endl;
return;
      }
      
  }
  ll ans=pow(2,x);

  cout<<ans<<endl;



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