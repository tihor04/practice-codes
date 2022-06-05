#include "bits/stdc++.h"

using namespace std;

int  firstoccr(int arr[],int n,int i,int key)
{
    if(i==n)
    return -1;
   if(arr[i]==key)
   return i;
   return firstoccr(arr+1,n-1,i+1,key);
}

int lastoccr(int arr[],int n,int i,int key)
{
    if(i==n)
    return -1;
   int rest=lastoccr(arr,n,i+1,key);
   if(rest!=-1)
   {
        return rest;
   }
   if(arr[i]==key)
   return i;
   else
    return -1;

}
int main()
{
    int n=7;
    int key=2;
    
    int arr[n]={4,1,2,1,2,5,2,7};

   int k= lastoccr(arr,n,0,key);
   cout<<k;
    return 0;
}