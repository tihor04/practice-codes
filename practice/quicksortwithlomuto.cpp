#include "bits/stdc++.h"

using namespace std;



int lomuto(int arr[],int l,int h)
{
    int i=l-1;
    int pivot=arr[h];
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],pivot);

    return i+1;
}

void quicksort(int arr[],int l,int h)
{
    if(h>l)
 {
     int p=lomuto(arr,l,h);
     quicksort(arr,l,p-1);
     quicksort(arr,p+1,h);
 }
}

int main()
{
    int arr[]={10,2,4,5,1};
    int n=5;
    quicksort(arr,0,n-1);

    for(int  x:arr)
    cout<<x<<" ";
    return 0;
}