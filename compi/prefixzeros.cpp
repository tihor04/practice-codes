#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n,k;
   cin>>n>>k;
   string str;
   cin>>str;

   int arr[n];

   for(int i=0;i<n;i++)
   {
       arr[i]=stoi(str[i]);
   }

   int brr[n];
   for(int i=0;i<n;i++)
   brr[i]=10-arr[i];

   if(k<brr[0])
   {
       cout<<0<<endl;
       return ;
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