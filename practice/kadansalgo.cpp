#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n=5;
    int arr[n]={-1,4,-6,7,-3};
     int currentsum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
       currentsum+=arr[i];
       if(currentsum<0)
       {
           currentsum=0;
       }
       max_sum=max(currentsum,max_sum);
    }
    cout<<max_sum;
    return 0;
}