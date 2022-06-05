#include <bits/stdc++.h>

using namespace std;


bool isprime(int n){
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}

	return true;
}

int main()
{

	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	int n;
	cin>>n;

	if(n==1){
		cout<<"no";
		return 0;

	}

   if(isprime(n)==true)
   	cout<<"yes";
   else 
   	cout<<"no";


	return 0;
}