#include "bits/stdc++.h"

using namespace std;
int k=25;

int findsubarray(int arr[],int n,int sum)
{
    if(n==0 &&sum==k)
    return 1;
    else if(n==0)
    return 0;
    return findsubarray(arr,n-1,sum+arr[n-1])+findsubarray(arr,n-1,sum+0);



     
}

int main()
{
    int arr[]={10,20,15};
    int n=3;
   cout<<findsubarray(arr,n,0);
    return 0;
}