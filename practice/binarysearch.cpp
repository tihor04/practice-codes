#include "bits/stdc++.h"

using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	int k=3;
	int st=0;
	int end=n-1;
	int res=-1;
	while(st<end)
	{
		int mid=(st+end)/2;
		if(arr[mid]==k)
		{
			res=mid;
			break;
		}
		else if(arr[mid]<k)
	{
		st=mid+1;

	}
	else
	{
		end=mid-1;
	}
	}


	cout<<res;
	return 0;

}