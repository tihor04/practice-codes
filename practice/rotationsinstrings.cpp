#include "bits/stdc++.h"

using namespace std;

bool findrotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return false;
    else
    return ((s1+s1).find(s2)!=string::npos);

}

int main()
{
   string s1="CDBA";
   string s2="ABCD";
   cout<<findrotation(s1,s2);
    return 0;
}