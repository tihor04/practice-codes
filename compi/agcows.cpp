#include <bits/stdc++.h>

using namespace std;

bool ispossible(int arr[],int n,int c,int mid)
{
    int curr=1;
	int prev=arr[0];

	for(int i=1;i<n;i++)
	{
		if(arr[i]-prev>=mid){
			curr++;
		}
	}

	if(curr>=k)
	return 1;
	else 
	return 0;
	
}
int main(){

int t;
cin>>t;


while(t--){



	//  #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif




	int n,c;
	cin>>n>>c;

	int arr[n];
	memset(arr,0,sizeof(arr));

	for(int i=0;i<n;i++)
		cin>>arr[i];

     sort(arr,arr+n);

     int i=0;
     int j=arr[n-1];
     int curr=0;

     while(i<=j){

     	int mid=(i+j)/2;

     	if(ispossible(arr,n,c,mid)){
     		i=mid+1;
     		curr=mid;
     	}
     	else
     	{
          j=mid-1;
     	}

     }

     cout<<curr;


}


	return 0;
}