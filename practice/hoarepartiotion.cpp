#include "bits/stdc++.h"

using namespace std;

void partition(int arr[],int l,int h)
{
    int i=l-1,j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do{ i++;}
        while(arr[i]<pivot);

        do{j--;}
        while(arr[j]>pivot);
        if(i>=j)
        break;

        swap(arr[i],arr[j]);
    }
}

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main()
{
    int arr[]={5,21,22,1,3,};
    int n=5;
    partition(arr,0,n-1);


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}