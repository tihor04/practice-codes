#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n1=2 ,n2=2,n3=2;
    int arr1[n1][n2];
    int arr2[n2][n3];

    cout<<"enter the first array"<<endl;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"enter the second array"<<endl;

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>arr2[i][j];
        }
    }
 int arr3[n1][n3];

 for(int i=0;i<n1;i++)
 {
     for(int j=0;j<n3;j++)
     {
         int sum=0;
         for(int k=0;k<n2;k++)
     {
        sum+=arr1[i][k]*arr2[k][j];
     }
     arr3[i][j]=sum;
     }

     } return 0;
 }



   
