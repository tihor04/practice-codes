#include "bits/stdc++.h"

using namespace std;

void findunion(int a[],int b[],int n,int m)
{
    int i=0;
    int j=0;

    while(i<m && j<m)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }

        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        }

        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else if(a[i]==b[j])
        {
            cout<<a[i];
            i++;
            j++;
        }
    }

  while(i<n){if(i>0 || a[i-1]!=a[i]){cout<<a[i]<<" "; i++;}}
  while(j<m){if(j>0 || b[j-1]!=b[j]){cout<<b[j]<<" "; j++;}}


}

int main()
{
    int a[]={2,4,4,10,90};
    int b[]={1,5,11,10};
    int n=5;
    int m=4;
    findunion(a,b,n,m);
    return 0;
}