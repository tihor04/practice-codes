#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n,k;
   cin>>n>>k;



   if(n==1&&k==1)
   {
       cout<<"R"<<endl;
       return;
   }

  int w=(int)ceil((double)n/2);
   if(k>w){
       cout<<"-1"<<endl;
       return;
   }

   int i=0,j=0;

   char arr[n][n];

   for(int z=0;z<n;z++)
   {
       for(int x=0;x<n;x++)
       arr[z][x]='.';
   }
   
   
   while(k>0)
   {
       
       arr[i][j]='R';
       k--;

       if(k!=0)
       arr[n-i-1][n-j-1]='R';

       i+=2;j+=2;
       
       k--;
   }

    for(int z=0;z<n;z++)
   {
       for(int x=0;x<n;x++)
       cout<<arr[z][x];

       cout<<endl;
    
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