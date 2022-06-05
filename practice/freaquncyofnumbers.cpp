#include "bits/stdc++.h"

using namespace std;

void findfreq(int arr[],int n)
{

     int res=1;
     int i;
    for( i=0;i<n-1;i++)
    {
       
        if(arr[i]==arr[i+1])
        res++;
        else{
         cout<<arr[i]<<" "<<res<<endl;
         res=1;

        }
       
       
    }
    cout<<arr[i]<<" "<<res;
}

int main()
{
    int arr[]={40,50,50};
    int n=3;
    findfreq(arr,n);
    return 0;
}