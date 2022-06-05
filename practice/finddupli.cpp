#include "bits/stdc++.h"

using namespace std;

int removedupli(int arr[],int n)
{
    int size=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        arr[i]=-1;
       
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        size++;
    }
    return size;
    
}

int main()
{

    int arr[]={ 10,10,20,30,30,40};
    int n=6;
    cout<<removedupli(arr,n);
    return 0;
}