#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;

   if(a==c && b==d)
   {
       cout<<0<<endl;
       return;
   }

   if((a+b)%2==0 && (c+d)%2==0)
   {
       cout<<2<<endl;
       return;
   }
   if((a+b)%2!=0 && (c+d)%2!=0)
   {
       cout<<2<<endl;
       return;
   }
   if((a+b)%2!=0 && (c+d)%2==0)
   {
       cout<<1<<endl;
       return;
   }
   if((a+b)%2==0 && (c+d)%2!=0)
   {
       cout<<1<<endl;
       return;
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