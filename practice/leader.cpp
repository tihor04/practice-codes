#include "bits/stdc++.h"

using namespace std;

void printleader(int arr[],int n)

{
    int max=arr[n-1];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
     {
         if(arr[i]>max)
         {
             cout<<arr[i]<<" ";
             max=arr[i];
         }
     }
}

int main()
{
    int arr[]={30,20,10};
    int n=3;
    printleader(arr,n);
    return 0;
}