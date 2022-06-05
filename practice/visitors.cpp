#include <iostream>
#include <climits>
#include<cmath>

using namespace std;

int main(){
	int arr[8]={1,2,0,7,2,0,2,2};
	int count=0;
	int maxi=arr[0];
	if(arr[0]>arr[1])
		{
			count++;

		}
		else
			maxi=arr[1];

		for(int i=1;i<7;i++)
		{
			if(arr[i+1]<arr[i] && arr[i]>=maxi)
			{
               count++;
			}
			maxi=max(maxi,arr[i]);
		}
		if(arr[7]>maxi)
			count++;

		cout<<count;
	return 0;
}