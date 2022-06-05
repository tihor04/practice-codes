#include "bits/stdc++.h"

using namespace std;

void reverse(int arr[],int n,int d)
{
    int k=d-1;
    //swapit(arr,0,k);
    swapit(arr,d,n-1);
    swapit(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void swapit(int arr[],int low,int high)
{
    while(low<high)
    {
    swap(arr[low],arr[high]);
    high--;
    low++;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    reverse(arr,n,k);
    return 0;
}