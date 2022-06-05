#include "bits/stdc++.h"

using namespace std;

int sortit(int arr[],int l,int r)
{
    int i=l-1;
    int pivot=0;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }

    }

    return i;



}

int main()
{
    int arr[]={-2,2,1,-1,2};
    int n=5;
    cout<<sortit(arr,0,n-1);
    return 0;
}