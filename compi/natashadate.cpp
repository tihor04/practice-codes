#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   
   ll n,c;
   cin>>n>>c;


   if(c>=n-1)
   {
       ll max=(n-1)*n/2;
       ll min=n;
       cout<<max<<" "<<min<<endl;
       return;
   }
   

   ll max=(n-1)*n/2;

   ll z= n-c;
   ll min=(z*(z+1)/2)+c-1;

   cout<<max<<" "<<min<<endl;



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