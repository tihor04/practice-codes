#include "bits/stdc++.h"

using namespace std;

int findpeak(int arr[],int n)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if((mid==0 || arr[mid]>arr[mid-1]) &&(mid==n-1 || arr[mid]>arr[mid+1]))
        return arr[mid];

        if(arr[mid]<arr[mid-1])
        high=mid-1;
        else
        low=mid+1;


    }
    return -1;
}

int main()
{
    int arr[]={10,12,13,30,20,22,12};
    int n=7;
    cout<<findpeak(arr,n);
    return 0;

}