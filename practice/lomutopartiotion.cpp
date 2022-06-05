#include "bits/stdc++.h"

using namespace std;

void lomuto(int arr[],int l,int h)
{
    int i=l-1;
    int pivoit= arr[h];
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pivoit)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[h],arr[i+1]);

}

void swap(int a,int b)
{
    int temp= a;
    a=b;
    b=temp;
}


int main()
{
    int arr[]={5,4,3,2,1};
    int n=5;
    lomuto(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}