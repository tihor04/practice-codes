#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n;
   cin>>n;

   int k;
   cin>>k;

   if(n%2!=0 && k==0){
      cout<<"NO"<<endl;
   }
   else cout<<"YES"<<endl;
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