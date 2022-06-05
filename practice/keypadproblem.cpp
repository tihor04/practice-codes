#include "bits/stdc++.h"
using namespace std;

string KeypadArray[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    unordered_map
    int k=ch;
    string code=KeypadArray[k];
    for(int i=0;i<code.length();i++)
    {
        keypad(s.substr(1),ans+code[i]);
    }

}

int main()
{
    keypad("23","");
    return 0;
}