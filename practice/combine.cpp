#include "bits/stdc++.h"
using namespace std;

int sortandcombine(int arr[],int brr[],int n1,int n2)
{
  
    int i=0;
    int j=0;
   
    while(i<n1 &&j<n2)
    {
        if(i==n1 || arr[i]>brr[j])
        {
            cout<<brr[j]<<" ";
            
            j++;
        }
        else if(j==n2 || arr[i]<brr[j])
        {
         cout<<arr[i]<<" ";
         
          i++;
        }
        else
        {cout<<arr[i]<<" ";
        i++;
        }
    
    }

   
}

int main(){
    int arr[]={1,3,5,7};
    int brr[]={2,4,5,6};
    int n1=4;
    int n2=4;
    sortandcombine(arr,brr,n1,n2);
    return 0;
}