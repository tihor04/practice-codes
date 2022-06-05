#include <bits/stdc++.h>
using namespace std;
#define ll long long int

       long long int  ans=0;
    
    bool checkvalid(string s){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1])
                return false;
        }
        
        return true;
    }
    
    void findans(string s,int i, string str){
        
        if(str.length()>3)
        {
            return;
        }
        
        if(str.length()==3)
        {
            if(checkvalid(str))
                ans++;
            return;
        }
        
        findans(s,i+1,str+s[i]);
        
        findans(s,i+1,str);
    }
    
    long long numberOfWays(string s) {
        ans=0;
        
        string str="";
        
         findans(s,0,str);
        
        return  (long long int)ans;
    }

void solve()
{
   string s="001101";
   cout<<numberOfWays(s);
}
int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


  // int t;
  // cin>>t;


  // while(t-->0) 
  solve();

 return 0;
}