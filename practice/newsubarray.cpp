#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[7]={10,7,4,6,8,10,11};
	int pd=arr[1]-arr[0];
	int ans=2;
	int curr=1;
	for(int i=1;i<6;i++)
	{
		if(pd==arr[i+1]-arr[i])
		{
			curr++;
		}
		else 
		{
			curr==2;
			pd=arr[i+1]-arr[i];
		}
		ans=max(ans,curr);
		
 
	}
	cout<<ans;
	return 0;
}