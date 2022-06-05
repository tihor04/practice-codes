#include <iostream>
using namespace std;
int main()
{
	
     #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
     	int sum=0;
	int n;

	cin>>n;

	for(int i=0;i<n;i++)
	{
		sum=sum+i;

	}
	cout<<sum;

	return 0;
}