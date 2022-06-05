#include <bits/stdc++.h>

using namespace std;
const int CHAR = 256;


bool areSame(int CT[],int CP[]){
    for(int i=0;i<CHAR;i++){
        if(CT[i]!=CP[i])return false;
    }
    return true;
}



bool findanagram(string txt,string pat)
{
    int ct[CHAR]={0},cp[CHAR]={0};

    for(int i=0;i<pat.length();i++)
    {
        ct[txt[i]]++;
        cp[pat[i]]++;
    }

    for(int i=pat.length();i<txt.length();i++)
    {
        if(areSame(ct,cp))
        return true;
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }

    return false;
}

int main()
{

    string txt="geeksforgeeks";
    string pat="frog";
    cout<<findanagram(txt,pat);
    return 0;
}