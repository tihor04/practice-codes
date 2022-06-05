#include "bits/stdc++.h"

using namespace std;

int countandmerge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

   int left[n1],right[n2];

   for(int i=0;i<n1;i++)
   left[i]=arr[i+l];

   for(int i=0;i<n2;i++)
   right[i]=arr[m+1+i];

   int res=0,i=0,j=0,k=l;

   while(i<n1 && j<n2)
   {
       if(left[i]<=right[j])
       {
           arr[k++]=left[i++];
       }
       else
       {
           arr[k++]=right[j];
           res+=n1-i;
           j++;
       }
   }

   while(i<n1)
   {
       arr[k++]=left[i++];
   }

   while(j<n2)
   {
       arr[k++]=right[j++];
   }
   return res;
}

int countinversion(int arr[],int l,int r)
{
    int res=0;
    if(r>l)
    {
        int mid=l+(r-l)/2;
        res+=countinversion(arr,l,mid);
        res+=countinversion(arr,mid+1,r);
        res+=countandmerge(arr,l,mid,r);
    }

    return res;

}

int main()
{
    int arr[]={91,2,33,1,3};
    int n=5;
    cout<<countinversion(arr,0,n-1);
    return 0;
}