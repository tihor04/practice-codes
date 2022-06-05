#include "bits/stdc++.h"

using namespace std;

int main(){
    int arr[]={12,3,1,22,15};
    int n=5;
   
    for(int i=0;i<n;i++)
    {
         int mini=INT_MAX;
           int ind=-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini=arr[i];
                ind=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[ind];
        arr[ind]=temp;
    }


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}