#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n;
   cin>>n;

   if(n==1)
   {
       cout<<"0"<<endl;
       return;
   }

   if(n%2==0){
       int  ans=floor(log((int)n)/log((int)2));
       cout<<ans<<endl;
   }
   else
   {
       int  ans=ceil(log((int)n)/log((int)2));
       cout<<ans<<endl; 
   }
       

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