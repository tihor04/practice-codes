#include "bits/stdc++.h"
#include <cmath>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={1,-4,3,2,1};
int maxsum=INT_MIN;
 for(int i=0;i<n;i++)
 {
     int sum=0;
     for(int j=i;j<n;j++)
     {
         sum+=arr[j];
         maxsum=max(sum,maxsum);
     }
 }
 cout<<maxsum<<endl;
    return 0;

}