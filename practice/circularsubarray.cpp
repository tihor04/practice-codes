#include "bits/stdc++.h"
using namespace std;
int kadane(int arr[],int n)
{
    int maxsum=INT_MIN;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        if(curr<0)
        {
            curr=0;

        }
        maxsum=max(maxsum,curr);
    }
    return maxsum;
}
int main()
{
    int n=7;
    int arr[n]={4,-4,6,-6,10,-11,12};
    int maxsum=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int wrapsum=0;
    int unwrapsum=0;
    unwrapsum=kadane(arr,n);
   for(int i=0;i<n;i++)
   {
       arr[i]=arr[i]*(-1);
          }
          wrapsum=sum+kadane(arr,n);
          cout<<max(wrapsum,unwrapsum);

 
    return 0;
}