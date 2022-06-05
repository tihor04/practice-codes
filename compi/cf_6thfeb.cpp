#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool ispalendrome(string str)
{
    int a=0;
    int  b=str.length()-1;
    while(a<b)
    {
        if(str[a]!=str[b])
        return false;

        a++;
        b--;
    }
    return true;
}

void solve()
{
   int n,k;
   cin>>n>>k;

   string str;

   cin>>str;
   if(k==0)
   {
       cout<<1<<endl;
       return;
   }

   if(ispalendrome(str)){
   cout<<1<<endl;
   }
   else
   cout<<2<<endl;
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