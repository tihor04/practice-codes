#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){

	ll n,k;
	cin>>n>>k;


	if(k==1){
		if(n%2==0)
			cout<<"EVEN"<<endl;
		else
			cout<<"ODD"<<endl;

		return;
	}

	if(k==2){
		cout<<"ODD"<<endl;
		return;
	}

	cout<<"EVEN"<<endl;
}

int main(){


int t;
cin>>t;

while(t--)
	solve();




	return 0;
}