#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
 string s;
 cin>>s;

 int p=s[0]-'a';

if(p==0){
    cout<<s[1]-'a'<<endl;
    return;
}

int z=p*25;

if(s[1]-'a'<s[0]-'a'){
    cout<<z+s[1]-'a'+1<<endl;
    return;
}

cout<<z+s[1]-'a'<<endl;




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