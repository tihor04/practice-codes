#include "bits/stdc++.h"

using namespace std;

int findintersections(int arr[],int brr[],int n,int m)
{
    unordered_set<int> myset;

    for(int i=0;i<n;i++)
    {
        myset.insert(arr[i]);
    }

    int count=0;

    for(int i=0;i<m;i++)
    {
        if(myset.count(brr[i])>0)
        {
          count++;
          myset.erase(myset.find(brr[i]));
        }
        
    }

    return count;
}

int main()
{
    int arr[5]={12,33,10,4,1};
    int brr[6]={12,2,11,33,1,3};
    cout<<findintersections(arr,brr,5,6);
    return 0;
}