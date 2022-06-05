#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n;
   cin>>n;
   vector<int> b,v;
   map<int,int> m,ch;
  int g;
   for(int i=0;i<2*n;i++)
   {
       cin>>g;
       b.push_back(g);
       if(m[g]==0)
       v.push_back(g);

       m[g]++;
   }


   sort(v.begin(),v.end());
   int k=0;
   ch[v[0]]++;
   for(int i=1;i<v.size();i++)
   {
       int mk=ceil((i+1)/2.0);
       ch[v[mk-1]]++;
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