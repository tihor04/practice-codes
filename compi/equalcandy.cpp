#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n;
   cin>>n;
   ll arr[n];
ll mini=INT_MAX;
   for(int i=0;i<n;i++){
     cin>>arr[i];
      mini=min(mini,arr[i]);
   }

    if(n==1){
       cout<<0<<endl;
       return;
   }

  ll sum=0;

  for(int i=0;i<n;i++)
  {
     sum+=(arr[i]-mini);
  }

cout<<sum<<endl;
 


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