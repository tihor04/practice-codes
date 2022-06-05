#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n=3;
    int arr[n][n];
    int i=1;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
          {
              arr[j][k]=i;
              i++;
          }
    
    }

    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            int temp=arr[j][k];
            arr[j][k]=arr[k][j];
            arr[k][j]=temp;
        }
    }

    int j=0,k=n-1;
    while(j<k)
    {
        for(int p=0;p<n;p++)
        {
            int temp=arr[j][p];
            arr[j][p]=arr[k][p];
            arr[k][p]=temp;
        }
        j++;
        k--;
    }
   
      for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
          {
            cout<<arr[j][k]<<" ";
          }
          cout<<endl;
    
    }

    return 0;
}