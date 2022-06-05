#include "bits/stdc++.h"
using namespace std;
 void printsub(string s,string ans)
 {
 if(s.length()==0)
 {
     cout<<ans<<endl;
     return;
 }
     printsub(s.substr(1),ans);
     printsub(s.substr(1),ans+s[0]);
 }
int main()
{
    string s = "ABC";
    printsub(s,"");
    return 0;
}