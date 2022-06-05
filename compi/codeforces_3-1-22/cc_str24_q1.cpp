#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int x,y;
   cin>>x>>y;

   if(y==0)
   {
       cout<<x<<endl;
       return;
   }

   if(x==y)
   {
       cout<<2*x-1<<endl;
       return;
   }

   cout<<2*y-(x-y)<<endl;

   
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