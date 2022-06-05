#include "bits/stdc++.h"

using namespace std;

bool findsum(int arr[],int n,int k)
{
    int st=0;
    int end=0;
    int sum=arr[0];
    while(end<n)
    {
        if(sum>k)
        {
            sum-=arr[st];
            st++;
        }
        else if(sum<k)
        {
            end++;
            sum+=arr[end];
        }
        else 
        return true;

    }

    if(sum!=k)
    return false;
    else return true;
    
}

int main()
{
    int arr[]={9,3,2,1,11};
    int n=5;
    int k=6;
    cout<<findsum(arr,n,k);
    return 0;
}