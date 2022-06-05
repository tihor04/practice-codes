#include<iostream>
#include<cmath>
using namespace std;
int todecimal(int a)
{
	int num=0;
	int i=0;
	while(a>0)
	{
       int k=a%10;
       num+=k*pow(2,i);
       i++;
       a=a/10;
	}
	return num;
}
int ac
int main(){
	int k;
	cin>>k;

	int ans=todecimal(k);
	cout<<ans<<endl;
	return 0;

}