#include "bits/stdc++.h"

using namespace std;

bool checkanagrams(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();
    if(n!=m)
    return false;

    int count =256;

    int arr[count]={0};

    for(int i=0;i<n;i++)
    {
        arr[s1[i]]++;
        arr[s2[i]]--;
    }

    for(int i=0;i<count;i++)
    {
        if(arr[i]!=0)
        return false;


    }

    return true;
}


int main()
{

    string s1="manan";
    string s2="rohit";
    cout<<checkanagrams(s1,s2);
    return 0;
}