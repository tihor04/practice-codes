#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    char arr[100];
    cout<<"enter the word"<<endl;
    cin>>arr;

    bool check=true;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check =false; 
            break;
        }
    }
    if(check==true)
    cout<<"is palendrome";
    else
    cout<<"is not palendrome";

    return 0;
}