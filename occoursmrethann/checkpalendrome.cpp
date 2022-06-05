#include "bits/stdc++.h"

using namespace std;

bool checkpalendrome(string str)
{
    int n=str.size();

    int i=0,j=n-1;

    while(i<=j)
    {
        if(str[i]!=str[j])
        return false;
        
        i++;
        j--;
    }

    return true;
}


int main()
{
     string std="geeg";
     cout<<checkpalendrome(std);
    return 0;
}