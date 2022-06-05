#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   string s;
   cin>>s;

   ll n=s.length();
   int count=0;
   int k;
   if(s[0]=='1')
   k=1;
   else {
   k=0;
   count++;
   }

   for(ll i=1;i<n;i++)
   {
       if((s[i]=='1' && k==0))
       {
          count++;
          k=1;
       }
       else if((s[i]=='0' && k==1))
       {
           count++;
           k=0;
       }
   }

   cout<<count<<endl;

   

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