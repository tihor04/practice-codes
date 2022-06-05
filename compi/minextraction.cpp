#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n;
   ll arr[n];
   
   
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   if(n==1)
   {
       cout<<arr[0]<<endl;
       return;
   }

   unordered_map<ll,int> map;
   for(int i=0;i<n;i++)
   {
       map[arr[i]]++;
   }

   if(map.size()==1)
   {
       cout<<arr[0]<<endl;
       return;
   }

   priority_queue< pair<ll,int> , vector<pair<ll,int>, greater< pair<ll,int> > > pq;

   for(auto z:map)
   {
       pq.push({z.first,z.second});
   }

   int maxele=INT_MIN;

   

   while(pq.size()!=1)
   {
       maxele=max(maxele,pq.top().first);
       ll num=pq.top().first;
       int k=pq.top().second;
       pq.pop();
       for(auto l:pq)
       {
         l.first=l.first-num*k;
       }

   }

   cout<<maxele<<endl;
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