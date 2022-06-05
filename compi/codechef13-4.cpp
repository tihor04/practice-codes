#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int  n,x;
   cin>>n>>x;

   


   if(n==1){
       cout<<x;
       return;
   }

   if(n==2){
       cout<<"0"<<x*n<<endl;
       return;
   }

   int arr[n];

   int st=n/2;

   arr[st]=x;

   int i=st-1;
   int p=x-1;
   while(i>=0){
       arr[i]=p;
       p--;
       i--;
   }
   p=x+1;
   int j=st+1;
   if(n%2==0){
       while(j<n-1){
           arr[j]=p;
           p++;
           j++;
       }

       int bdif=x-arr[0]+x-arr[1];
       arr[n-1]=x+bdif;
   }
   else{
       while(j<n){
           arr[j]=p;
           p++;
           j++;
       }
   }

   for(int i=0;i<n;i++){
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