#include <bits/stdc++.h>
using namespace std;
#define ll long long int




ll calculate(ll p,  ll q)
{
    ll mod =  998244353, expo=0;
    expo = mod - 2;
 
   
    while (expo!=0) {
 
        
        if (expo %2!=0) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        
        expo =expo/2;
    }
    return p;
}

void solve()
{
   int n;
   cin>>n;

   if(n==1)
   {
       cout<<1<<endl;
       return;
   }
   if(n==0)
   {
       cout<<0<<endl;
       return;
   }

   ll sum=pow(n*(n+1)/2,2);
   ll fact=n;

   if(sum%fact==0)
   {
       cout<<sum/fact<<endl;
       return;
   }
   else
   {
       ll k=calculate(sum,fact);
       cout<<k<<endl;
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