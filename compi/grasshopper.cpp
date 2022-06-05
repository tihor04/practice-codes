#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll x,n;
    cin>>x>>n;

    int num=n%4;
    int k=x%2;
    if(k==0)
    {
        if(num==0)
        {
            cout<<x<<endl;
            return;
        }
       else if(num==1)
        {
            cout<<x-n<<endl;
            return;
        }
        else if(num==2)
        {
            cout<<x+1<<endl;
            return;
        }
        else
        {
            cout<<x+4*(n/4+1)<<endl;
            return;
        }

    }
    else
    {
         if(num==0)
        {
            cout<<x<<endl;
            return;
        }
       else if(num==1)
        {
            cout<<x+n<<endl;
            return;
        }
        else if(num==2)
        {
            cout<<x-1<<endl;
            return;
        }
        else
        {
            cout<<x-4*(n/4+1)<<endl;
            return;
        }
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