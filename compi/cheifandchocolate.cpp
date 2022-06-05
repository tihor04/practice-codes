#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int x,y,z;

   cin>>x>>y>>z;

int totalmoney=x*5+y*10;

 cout<<totalmoney/z<<endl;

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