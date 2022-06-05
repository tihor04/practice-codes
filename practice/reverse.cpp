#include <iostream >
#include <cmath>
using namespace std;

int main(){

int num=153;

int sum=0;
int ori=num;

while(num>0)
{
	int k=num%10;
	sum+=pow(k,3);
	num=num/10;
	
}

 //if(sum==ori)
 	cout<<sum;
return 0;
}