#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool ispalendrome(string s)
{
    int a=0;
    int b=s.length()-1;
    while(b>a)
    {
        if(s[a]==s[b])
        return true;
        else
        {
            a++;
            b--;
        }
    }

    return false;
}

void solve()
{
 int n;
 cin>>n;

 string s;
 cin>>s;

 if(n%2!=0)
 {
     cout<<"NO"<<endl;
     return;
 } 

 map<char,int> mp;

 for(int i=0;i<n;i++)
 {
     mp[s[i]]++;
 } 

 
 vector<pair<char,int>> vec;


 for(auto x:mp)
 {
    vec.push_back({x.first,x.second});
 }

int maxind=-1;
int maxnum=INT_MIN;
int sum=0;

sort(vec.begin(),vec.end());

for(int i=0;i<vec.size();i++)
{
    if(vec[i].second>maxnum)
    {
        maxnum=vec[i].second;
        maxind=i;
    }
    
}



if(maxnum>(n/2))
{
    cout<<"NO"<<endl;
    return;
}


if(ispalendrome(s)==false)
{
    cout<<s<<endl;
    return;
}

string ans="";
for(int i=0;i<vec.size();i++)
{
    for(int j=0;j<vec[i].second;j++)
    ans+=vec[i].first;
}
int j=n/2-1;
  int  i=0;

    char c;
    while(i<j){
        c=ans[i];
        ans[i]=ans[j];
        ans[j]=c;
        i++;j--;
    }
    cout<<"YES\n"<<r<<"\n";






cout<<ans<<endl;







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