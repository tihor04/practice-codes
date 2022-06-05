#include <bits/stdc++.h>

using namespace std;

int main(){


int arr[7]={1,2,3,5,9,5,2};

sort(arr,arr+7);

int tar=7;

int i=0,j=6;

while(i<=j){
  int mid= (i+j)/2;

  if(arr[mid]>tar){
  	j=mid-1;

  }
  else if(arr[mid]<tar)
  	i=mid+1;
  else
  	cout<<mid;
}

cout<<"NF";


	return 0;
}
