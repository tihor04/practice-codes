#include "bits/stdc++.h"

using namespace std;

int main()
{
    string s="ajay";
    string res="";
    int n=s.length();

    for(int i=0;i<n;i+=2)
    {
        char first=s[i];
        char sec=s[i+1];
        res+=sec;
        res+=first;
    }

    cout<<res;
    return 0;
}