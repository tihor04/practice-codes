#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n;
   ll k;
   cin>>n>>k;

    vector<vector<int>> v;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>v[i][j];
       }
   }
 int ml=0;
   if(n%2==0)
   ml=n/2;
   else
   ml=n/2+1;

   for(int i=0;i<n;i++)
   {
       sort(v[i].begin(),v[i].end());
   }
      int minval=0,minindex=0,sum=0;
   for(int i=0;i<n;i++)
   {
      if(v[i][ml]<minval)
      {
          minval=v[i][ml];
          minindex=i;
      }
      sum+=v[i][ml];
   }


   if(sum>k)
   {
       cout<<"-1"<<endl;
       return;
   }

   
   for(int i=0;i<n;i++)
   {
      if(v[i][ml-1]>minval)
      minval=v[i][ml-1];
   }

   cout<<minval<<endl;

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