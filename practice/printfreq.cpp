#include "bits/stdc++.h"

using namespace std;

void findfreq(int arr[],int n)
{
    unordered_map<int ,int> myset;

    myset[arr[0]]=1;

    for(int i=1;i<n;i++)
    {
        if(myset.count(arr[i])>0)
        {
          myset[arr[i]]++;
        }
        else
        myset[arr[i]]=1;

    }

    for( auto x :myset)
    {
        cout<<x.first<<" "<< x.second<<endl;
    }
    }

int main()
{
    int arr[5]={1,1,4,1,2};
    findfreq(arr,5);
    return 0;
}