#include "bits/stdc++.h"

using namespace std;

int findmedian(int arr1[],int arr2[],int n1,int n2)
{
    int st=0,end=n1-1;
    while(st<=end)
    {
        int i1=(st+end)/2;
        int i2=(n1+n2+1)/2-i1;
        int min1=(i1==n1)?INT_MAX:arr1[i1];
        int max1=(i1==0)?INT_MIN:arr1[i1-1];
        int min2=(i2==n2)?INT_MAX:arr2[i2];
        int max2=(i2==0)?INT_MIN:arr2[i2-1];
        if(max1<=min2 && max2<min1)
        {
            if((n1+n2)%2==0)
            {
                return (double)(max(max1,max2)+min(min1,min2))/2;

            }
            else return (double)max(max1,max2);
        }
        else if(max1>min2)
        end=i1-1;
        else
        st=i1+1;
    }
}

int main()
{
    int arr1[]={10,20,30,40,50};
    int arr2[]={5,15,25,30,35,55,65,75,85};
    int n1=5;
    int n2=9;
    cout<<findmedian(arr1,arr2,n1,n2);
    return 0;
}