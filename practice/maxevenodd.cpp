#include "bits/stdc++.h"

using namespace std;

int longestsubarray(int arr[],int n)
{
    int cout=1;
    int maxcount=0;
    for(int i=0;i<n-1;i++)
    {
      if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
     {
         cout++;
         maxcount=max(maxcount,cout);
     }
      else
      {
          
          cout=1;
      }
    }

    return maxcount;
}

int main()
{
    int arr[]={10,11,12,13};
    int n=4;
    cout<<longestsubarray(arr,n);
    return 0;
}