#include "bits/stdc++.h"

using namespace std;

void shiftzero(int arr[],int n)
{
    int curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[curr]);
            curr++;
        }


    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{

    int arr[]={10,21,0,0,9,12};
    int n=6;
    shiftzero(arr,n);
    return 0;
}