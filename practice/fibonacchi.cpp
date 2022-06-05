#include <iostream>

using namespace std;
int  fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		return fact;

}

int main()
{
	int row=5;

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}
		cout<<endl;
	}
}
