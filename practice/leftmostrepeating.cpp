#include "bits/stdc++.h"

using namespace std;

int leftrepeating(string s1)
{
    int n=s1.size();

    int count=256;

    int arr[count]={0};

    for(int i=0;i<n;i++)
    {
        arr[s1[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[s1[i]]>1)
        return i;
    }

    return -1;
}

int main()
{
    string s1="abccb";

    cout<<leftrepeating(s1);
    return 0;
}