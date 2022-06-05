#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
  
  unordered_map<char,int>map;
  string s2;
  cin>>s2;
   string s;
  cin>>s;

for(int i=0;i<26;i++)
{
    char c=s2[i];
   
    map[c]=i+1;

}
int size=0;
if(s.length()==1 || s.length()==0){
cout<<0<<endl;
return;
}

for(int i=0;i<s.length()-1;i++)
{
    int first=map[s[i]];
    int second=map[s[i+1]];

    size+=(abs(first-second));
}

cout<<size<<endl;
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