#include "bits/stdc++.h"

using namespace std;
 int findmax(int arr[],int n)
 {
     int max=INT_MIN;
     int index=-1;
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
             index=i;
         }
     }

     return index;
 }

int main()
{
    int arr[]={10,4,12,22};
    int n=4;
    cout<<findmax(arr,n);
    return 0;
}
