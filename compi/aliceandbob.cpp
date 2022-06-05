#include <bits/stdc++.h>
using namespace std;
#define ll long long int




void solve()
{
   ll n,x,y;
   cin>>n>>x>>y;

   ll arr[n];

   for(int i=0;i<n;i++)
   cin>>arr[i];

   ll sum=0;
   for(int i=0;i<n;i++)
   sum+=arr[i];

   if((sum+x+y)%2==0)
   cout<<"Alice"<<endl;
   else
   cout<<"Bob"<<endl;
   
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