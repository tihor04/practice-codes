#include<iostream>

using namespace std;

int main()
{
	int arr[6]={12,45,23,51,19,8};
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}