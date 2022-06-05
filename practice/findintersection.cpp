#include "bits/stdc++.h"

using namespace std;

void findintersection(int arr[],int brr[],int n,int m)
{
    int i=0;
    int j=0;

    while(i<n && j<m)
    {
        if(i!=n-1 &&arr[i]==arr[i+1])
        i++;

        if(j!=m-1 && brr[j]==brr[j+1])
        j++;

        else if(arr[i]>brr[j])
        j++;
        else if(arr[i]<brr[j])
        i++;
        else 
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }

    }

}

int main()
{
    int arr[]={2,20,20,40,60};
    int brr[]={10,20,40,60};
    int n=5;
    int m=4;
    findintersection(arr,brr,n,m);
    return 0;
}