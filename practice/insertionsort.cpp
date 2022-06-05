#include "bits/stdc++.h"
using namespace std;

int main()
{
	int arr[]={5,4,3,2,1};
	int n=5;
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}