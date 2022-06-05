#include<iostream>
#include <climits>
#include <cmath>
 
 using namespace std;
 int main()
 {
 	int arr[8]={1,2,5,3,4,3,5,6};
 	const int N=1e6+2;
 	int ardix[N];
 	for(int i=0;i<N;i++)
 	{
 		ardix[i]=-1;
 	}

 	int mindix=INT_MAX;

 	for(int i=0;i<8;i++)
 	{
 		if(ardix[arr[i]]==-1)
 		{
 			ardix[arr[i]]=i;
 		}
 		else
 		{
             mindix=min(mindix,ardix[arr[i]]);
 		}
 	}
 	if(mindix==INT_MAX)
 	{
 		cout<<"-1"<<endl;
 	}
 	else
 	cout<<mindix<<endl;
 	return 0;
 }