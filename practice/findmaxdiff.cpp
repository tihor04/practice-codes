#include "bits/stdc++.h"

using namespace std;
 
 int findmax(int arr[],int n)
 {
     int max=INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         max=arr[i];
     }
     return max;
 }

  int findmin(int arr[],int n)
 {
     int min=INT_MAX;
     for(int i=0;i<n;i++)
     {
         if(arr[i]<min)
         min=arr[i];
     }
     return min;
 }

 

int main()
{
    int arr[]={10,20,30};
    int n=3;
    int max=findmax(arr,n);
    int min=findmin(arr,n);
    cout<<max-min;
    return 0;
}