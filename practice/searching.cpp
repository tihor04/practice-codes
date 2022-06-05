#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;

	int arr[n];
	cout<<"enter the array"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int key;
	cout<<"enter the key"<<endl;
	cin>>key;

	bool flag=false;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<i;
			flag=true;
			break;
		}

	}
	if(!flag)
		cout<<"-1";

	return 0;
}