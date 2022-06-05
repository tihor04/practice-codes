#include "bits/stdc++.h"
using namespace std;

int main() {
	int arr[5]={2,3,1,8,5};
	int n=5;
	unordered_map<int ,int> s;
	int sum=0;
	int res=0;
	int k=5;
	for(int i=0;i<n;i++)
	{
	    if(sum==k)
	    res=i+1;
	    sum+=arr[i];
	    if(s.find(sum)==s.end())
	    s[sum]=i;
	    if(s.find(sum-k)!=s.end())
	    res=max(res,i-s[sum-k]);
	   
	}
	
	cout<<res;
	return 0;
}