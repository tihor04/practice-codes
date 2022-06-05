#include "bits/stdc++.h"

using namespace std;

void partitionarr(int arr[],int l,int r)
{
    //using dutch national flag algorithm

    int low=0,mid=0,right=r;

    while(mid<=right)
{
    if(arr[mid]==0)
    {
        int temp=arr[mid];
        arr[mid]=arr[low];
        arr[low]=temp;
        mid++;
        low++;
    }
    else if(arr[mid]==1)
    mid++;
    else
    {
        int temp=arr[mid];
        arr[mid]=arr[right];
        arr[right]=temp;
        right--;
    }
}

for(int i=0;i<=r;i++)
{
    cout<<arr[i]<<" ";
}
    
}

int main()
{
    int arr[]={0,1,2,2,1,1,0};
    partitionarr(arr,0,6);

    return 0;
}