#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll x,y;

   cin>>x>>y;

   if(y==x){
    cout<<0<<endl;
   }
   else if(y>x){
    cout<<y-x<<endl;
   }
   else{
     int ab=abs(x-y);

     if(ab%2==0)
        cout<<ab/2<<endl;
    else
        cout<<ab/2+2<<endl;
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