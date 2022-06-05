#include "bits/stdc++.h"

using namespace std;

int chocolate(int arr[],int n,int m)
{
    sort(arr ,arr+n);

    int i=0;
    int j=m-1;
    int mindiff=INT_MAX;
    while(j<n)
    {
       int diff=arr[j]-arr[i];
       mindiff=min(mindiff,diff);
       j++;i++;
    }

    return mindiff;


}


int main()
{
    int arr[]={7,3,2,4,9,12,56};
    int n=7;
    int m=3;
    cout<<chocolate(arr,n,m);
    return 0;
}