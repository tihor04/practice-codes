#include "bits/stdc++.h"
using namespace std;
 int uniquenum(int arr[],int n){
     int xorsum=0;
     for(int i=0;i<n;i++)
     {
         xorsum=xorsum^arr[i];
     }
     return xorsum;

 }
int main()
{
    int n=5;
    int arr[n]={2,1,3,1,2};
    cout<<uniquenum(arr,n);
    return 0;
}