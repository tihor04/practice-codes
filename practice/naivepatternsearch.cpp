#include "bits/stdc++.h"

using namespace std;

void findpattern(string &s,string &p)
{
    int n=s.length();
    int m=p.length();

    int i=0;

    while(i<n-m)
    {
        int j=m-1+i;
        string sp=s.substr(i,j+1);

        if(sp==p)
        cout<<i<<" ";

        i++;
    }
}

int main()
{

    string s="AAAAAA";
    string p="AAA";

    findpattern(s,p);
    return 0;
}