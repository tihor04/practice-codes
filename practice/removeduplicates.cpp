#include "bits/stdc++.h"
#include<string>

using namespace std;

string removedupli(string source)
{
    if(source.length()==0)
    return "";
    char ch=source[0];
    string  ans=removedupli(source.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    else 
    return ch+ans;

}

int main()
{

    string s="apple";
    string k="";
    cout<<removedupli(s);
    return 0;
}