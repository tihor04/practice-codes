#include "bits/stdc++.h"

using namespace std;
 void printsub(string s,string ans)
 {
     if(s.length()==0)
     {
         cout<<ans<<endl;
         return;
     }
     char ch=s[0];
     int code=ch;
     printsub(s.substr(1),ans);
     printsub(s.substr(1),ans+ch);
     
     printsub(s.substr(1),ans+to_string(code));


 }

int main()
{
    string s ="AB";
     printsub(s,"");
    return 0;
}