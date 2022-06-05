#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct tripet{
    ll l;
    ll r;
    ll c;
    tripet(ll a,ll b,ll k)
    {
        l=a;
        r=b;
        c=k;
    }
};

void solve()
{
   int n;
   cin>>n;
   tripet arr[n];
   for(int i=0;i<n;i++)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       tripet tr=new tripet(a,b,c);
       arr[i]=tr;
   }

 ll lowest_l=arr[0].l;
 ll highest_r=arr[0].r;
 int lindex=0;
 int rindex=0;

 ll present_cost=arr[0].c;

 cout<<present_cost<<endl;

 for(int i=1;i<n;i++)
 {
   if(arr[i].r<highest_r)
   {
       rindex=i;
       highest_r=arr[i].r;

       if(arr[i].l>=lowest_l)
       {
          lowest_l=arr[i].l;
          lindex=i;
          present_cost=arr[i].c;
       }
       else
       {
           present_cost+=arr[i].c;
       }
   }
  else  if(arr[i].r==highest_r)
   {
       if(arr[i].l<lowest_l)
       {
           lindex=i;
           rindex=i;
           present_cost+=arr[i].c;
        }
        else if(arr[i].l==lowest_l && present_cost>arr[i].c){
           lindex=i;
           rindex=i;
           present_cost=arr[i].c;
       
       }


    }
    else{
        
    }

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