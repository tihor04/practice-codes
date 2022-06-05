#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n,p,x,y;
   cin>>n>>p>>x>>y;

   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }


   if(p==1)
   {
       cout<<y<<endl;
       return;
   }
   else
   {
       int sum=0;
       for(int i=0;i<p;i++)
       {
           if(arr[i]==0)
           sum+=x;
           else
           sum+=y;
       }
       cout<<sum<<endl;
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