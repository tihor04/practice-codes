#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(ll arr[])
{
   int n;
   cin>>n;
   string s;
   cin>>s;

   int grps=1;
   int it=s[0];

   for(int i=0;i<n;i++)
   {
       if(s[i]!=it)
       {
           grps++;
           it=s[i];
       }
   }

   if(arr[grps]==0)
   cout<<"RAMADHIR"<<endl;
   else
   cout<<"SAHID"<<endl;
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


  while(t-->0) {
      ll z=pow(10,5);
      ll arr[z]={1};
      arr[1]=1;
      for(ll i=2;i<z-1;i+=4)
      {
          arr[i]=0;
          arr[i+1]=0;
      }
solve(arr);

  }
  

 return 0;
}