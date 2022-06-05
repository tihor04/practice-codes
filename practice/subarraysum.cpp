#include <iostream>

using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;

	cin>>n;

	int arr[n];
	cout<<"enter the array"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s;
	cout<<"enter s"<<endl;
	cin>>s;

	int i=0,j=0,st=-1,end=-1,sum=0;

	while(j<n && sum+arr[j]<=s)
	{
       sum+=arr[j];
       j++;

	}

	if(sum==s)
	{
		cout<<i+1<<" "<<j;
		return 0;
	}

	while(j<n)
	{
		sum+=arr[j];
		while(sum>s){
			
				sum-=arr[i];
				i++;
		}
		if(sum==s)
			{
				st=i+1;
				end=j+1;
				break;
			}
			j++;

	}
	cout<<st<<" "<<end;
	return 0;
}