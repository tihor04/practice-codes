#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=1e5+1;

void solve()
{
   int n;
   string s;
   cin>>n>>s;

   ll dp[N];
    dp[1]=1;
    dp[2]=0;
    for(int i=3;i<N;i++)
    {
        dp[i]=min(dp[i-1],dp[-i-2])^1;

    }

    int c=0;
    char ch='2';
  for(int i=0;i<s.length();i++)
  {
      if(ch!=s[i]){
        c++;
        ch=s[i];
      }
      

  }

  if(dp[c]==1)
  {
      cout<<"Alice"<<endl;

  }
  else
  cout<<"Bob"<<endl;

  return;




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