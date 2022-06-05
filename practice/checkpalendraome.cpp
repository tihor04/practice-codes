#include "bits/stdc++.h"

using namespace std;
bool ispalendrome(string s,int start ,int end)
{
    if(start >=end)
    {
        return true;
    }
    if(s[start]!=s[end])
    return false;
    else 
    return ispalendrome(s,start+1,end-1);

}

int main(){


    string s="abcbba";
    int n=s.length();
    cout<<ispalendrome(s,0,n-1);

    return 0;
}