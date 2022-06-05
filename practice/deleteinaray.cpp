#include "bits/stdc++.h"

using namespace std;


void givearray(int arr[],int n ,int key)
{
    int k=-1;
    int i=0;
    for(;i<n;i++)
    {
        if(arr[i]==key)
        {
            k=i;break;
        }
    }
    if(k==-1)
    {
        cout<<"element not found";
        return;
    }
    for(;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=-1;

for(int j=0;j<n;j++)
cout<<arr[j]<<" ";

}

int main()
{
    int arr[5]={10,20,23,12,4};
    int n=5;
    int k=10;
    givearray(arr,n,k);
    return 0;
}