#include "bits/stdc++.h"
using namespace std;
int main(){
    int n=3;
    int arr[n][n];
    cout<<"enter the matrix";
  
   

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(i>j)
          {
               int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
          }
        }
    }

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;

}