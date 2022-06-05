#include <iostream >
#include <cmath>
using namespace std;

int main(){

	int k=1234;
	int rev;
	
	while(k>0)
	{
        int last =k%10;
       
       rev=rev*10+last;
        k=k/10;
	}
	cout<<rev;

	return 0;

}