#include<iostream>
#include<climits>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;

	cin>>n;
	int arr[n];

	int max=-1;

	cout<<"enter the array"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int arr2[n-1];
	for(int i=0;i<n-1;i++)
	{
		arr2[i]=arr[i+1]-arr[i];
	}

	for(int i=0;i<n-2;i++)
	{
		int k=1;
		while(arr2[i]==arr2[i+1])
		{
			k++;
		}
	   if(k>max)
		max=k;

	}
	cout<<max;
	
	return 0;
}