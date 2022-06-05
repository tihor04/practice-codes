#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n;
   cin>>n;

   if(n==1){
     cout<<"2"<<endl;
     return;
   }
  ll i=1;
  for(;i=<n-2;i++)
  cout<<i<<" ";

  cout<<i<<" "<<i<<" ";

ll z=(ll)pow(2,n)-(n-1)*n/2-i;

cout<<z<<endl;

   
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