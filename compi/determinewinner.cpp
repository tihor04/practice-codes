#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int pa,pb,qa,qb;

   cin>>pa>>pb>>qa>>qb;

  int p=max(pa,pb);
  int q=max(qa,qb);

  if(p==q){
    cout<<"TIE"<<endl;
  }
  else if(p>q){
    cout<<"Q"<<endl;
  }
  else
    cout<<"P"<<endl;
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