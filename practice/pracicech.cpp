#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isdouble(ll x,ll y)
{
    if(x/2==y || y/2==x)
    return true;
    else 
    return false;
}

void solve()
{
      ll x,y;
     cin>>x,y;

     if((x==1 && y>2)  || (y==1 && x>2) )
     {
         cout<<"NO"<<endl;
         return;
     }

     if(abs(x-y)==1)
     {
         cout<<"YES"<<endl;
         return;
     }
     if(isdouble(x,y ) || isdouble(x-2,y-1) || isdouble(x-1,y-2))
     {
         cout<<"YES"<<endl;
         return;

     }

     cout<<"NO"<<endl;
}

int main()
{

 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


  int t;
  cin>>t;


  while(t-->0) 
  {
   solve();
     
  }

 return 0;
}