#include "bits/stdc++.h"

using namespace std;

void filllps(string pat,int lps[],int m)
{
    int n=pat.length();

    int len=0;
    lps[0]=0;
    
    int i=1;

    while(i<n)
    {
        if(pat[i]==pat[len])
        {
            lps[i]=len+1;
            len++;
            i++;
        }
        else if(len==0)
        {
            lps[i]=0;
            i++;
        }
        else
        {
            len=lps[len-1];
        }
    }
}


void kmp(string &txt,string &pat)
{
    int n=txt.length();
    int m=pat.length();

    int lps[m];

    filllps(pat,lps,m);

    int i=0,j=0;
    while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<i-j<<" ";
            j=lps[j-1];
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j==0)
            i++;
            else
            j=lps[j-1];
        }
    }
}


int main()
{

    string pat="aaaa";
    string txt="aaaaaa";
    kmp(txt,pat);
    return 0;
}