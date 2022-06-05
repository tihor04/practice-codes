#include "bits/stdc++.h"
using namespace std;

int pivot(int arr[],int l,int r)
{
    int i=l-1;
    int piv=arr[r];
    for(int j=l;j<r;j++)
    {
        if(arr[j]<piv)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

int findelement(int arr[],int l,int r,int k)
{
    while(l<=r)
    {
        int p=pivot(arr,l,r);
        if(p==k-1)
        return p;
        else if(p>k-1)
        r=p-1;
        else 
        l=p+1;
    }
    return -1;
}

int main() {
	int arr[]={10,2,4,1,11};
	int n=5;
	int k=3;
	int p=findelement(arr,0,n-1,k);
	
	
	cout<<arr[p];
	return 0;
}