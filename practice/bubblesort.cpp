#include "bits/stdc++.h"
using namespace std;

int main()
{
	int arr[]={5,2,10,7};
	int n=4;
	bool swapped;
	for(int i=0;i<n;i++)
	{ 
	    swapped=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=true;
			}

		}
		if(swapped==false)
		break;
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}