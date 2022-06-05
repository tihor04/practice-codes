#include<iostream>
#include<cmath>
using namespace std;
bool check(int a,int b,int c)
{
	int x=max(a,max(b,c));
	int y,z;
	if(x==a)
	{
		y=b;
		z=c;
	}
	else if(x==b)
	{
		y=a;
		z=c;

	}
	else
	{
		y=a;
		z=b;
	}
	int sum=y*y+z*z;
	if(x*x==sum)
	return true;
	else return false;
}
int main(){


int x,y,z;
cin>>x>>y>>z;
if(check(x,y,z))
cout<<"are pythagorian triplet";
else 
cout<<"are not pythagorian triplet";





}