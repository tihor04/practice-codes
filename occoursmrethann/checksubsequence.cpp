#include "bits/stdc++.h"

using namespace std;

bool checksubsequence(string s1,string s2)
{
    int i=0,j=0;
    int n=s1.size();
    int m=s2.size();
    while(i<n && j<m)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
        i++;
    }
    if(j==m)
    return true;
    else 
    return false;
}

int main()
{

    string s1="geeksforgeeks";
    string s2="frelk";
    

    cout<<checksubsequence(s1,s2);
    return 0;
}