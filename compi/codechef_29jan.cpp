#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n,k;
   cin>>n>>k;

   if(n==k)
   {
       for(int i=1;i<=n;i++)
       {
           cout<<i<<" ";
       }
       cout<<endl;
       return;
   }

   if(n>1 && k==1 || k>n)
   {
       cout<<-1<<endl;
       return;
   }

   int arr[n];

   for(int i=0;i<n;i++)
   arr[i]=i+1;


int j=n-1;
int p=n-k;
for(int i=0;i<p;i++)
{
    int temp=arr[j];
    arr[j]=arr[j-1];
    arr[j-1]=temp;
    j--;
}

   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }

   cout<<endl;


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