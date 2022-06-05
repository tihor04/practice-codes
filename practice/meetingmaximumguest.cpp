#include "bits/stdc++.h"

using namespace std;


int meetmaxguest(int arr[],int dept[],int n)
{
    int i=1,j=0,res=1,curr=1;
    while(i<n&&j<n)
    {
        if(arr[i]<=dept[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]={900,940,950,1100,1500,1800};
    int dept[]={910,1200,1120,1130,1900,2000};
    int n=6;
    cout<<meetmaxguest(arr,dept,n);
    return 0;
}