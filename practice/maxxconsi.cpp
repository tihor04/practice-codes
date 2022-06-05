#include "bits/stdc++.h"

using namespace std;

int maxconsi1(int arr[],int n)
{
    int res=0;
    int maxno=INT_MIN;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==0)
       res=0;
       else
       {
           res++;
           maxno=max(maxno,res);
       }
    }
    return maxno;

}

int main()
{

    int arr[]={0,1,1,0,1,1,1,1,0,1};
    int n=10;
    cout<<maxconsi1(arr,n);

    return 0;
}