#include "bits/stdc++.h"

using namespace std;

void reversearray(int arr[],int n)
{
    if(n==0)
    return ;
    int st=0;
    int end=n-1;
    while(st<end)
    {
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

 }

int main()
{
    int arr[]={10,5,7,30};
    int n=4;
    reversearray(arr,n);
    return 0;
}