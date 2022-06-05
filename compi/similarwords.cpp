#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n,m;
   cin>>n>>m;

   string arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   ll mindif=INT_MAX;

   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++){
           ll dif=0;
           for(int p=0;p<m;p++)
           {
               dif+=abs(arr[i][p]-arr[j][p]);
               
           }
           mindif=min(mindif,dif);
       }
   }

   cout<<mindif<<endl;
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