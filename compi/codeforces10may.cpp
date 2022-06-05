#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int f(char a)
{
    if(a=='0')return 0;
    if(a=='1')return 1;
    if(a=='2')return 2;
    if(a=='3')return 3;
    if(a=='4')return 4;
    if(a=='5')return 5;
    if(a=='6')return 6;
    if(a=='7')return 7;
    if(a=='8')return 8;
    if(a=='9')return 9;
}

void solve()
{
   string s;
   cin>>s;
  int sum1=0,sum2=0;
   for(int i=0;i<s.length();i++)
   {
       int x=f(s[i]);    
       if(i<3)
       {
           sum1+=x;
       }
       else 
       sum2+=x;
   }

   if(sum1==sum2)
   cout<<"YES"<<endl;
   else 
   cout<<"NO "<<endl;    
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