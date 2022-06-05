#include <bits/stdc++.h>

using namespace std;

int maxsum(int arr[],int n)
{
    if(n==1)
    return arr[0];

    if(n==2)
    return max(arr[1],arr[0]);

    int prev_prev=max(arr[1],arr[0]);
    int prev=arr[0];

    int res=prev;

    for(int i=2;i<n;i++)
    {
        res=max(prev,prev_prev+arr[i]);
        prev_prev=prev;
        prev=res;
    }

    return res;
}

int main()
{

    int n=6;
    int arr[n]={10,5,15,20,2,30};

    cout<<maxsum(arr,n);
    return 0;

}