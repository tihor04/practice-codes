#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll  a , b;
   cin>>a>>b;


   if(a==1)
   {
       cout<<"YES"<<endl;
       return;
   }
 

   
   int n=10;
   
 
   ll z=b;
   ll r=pow(10,9);

  while(z<r)
   {
      if(z%a==0)
      {
          cout<<"YES"<<endl;
          return;
      }
     z=z*b;
   }

   cout<<"NO"<<endl;
 


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