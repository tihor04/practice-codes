
#include <iostream>
#include<climits>
using namespace std;

int main()
{
	int arr[3]={1,2,2};
	
	int k=3*(3+1)/2;
	int sum[k];
	int p=0;
	for(int i=0;i<3;i++)
	{
		int curr=0;
		for(int j=i;j<3;j++)
		{
			curr+=arr[j];
			sum[p]=curr;
			p++;

		}
	}

	int finalsum=0;
	for(int i=0;i<k;i++)
	{
		finalsum+=sum[i];
	}
	cout<<finalsum;
	return 0;
}