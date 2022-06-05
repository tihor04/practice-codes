#include "bits/stdc++.h"

using namespace std;

bool givensum(int arr[],int n,int k)
{
    unordered_set<int> s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum==k)
        return true;
        sum+=arr[i];
        if(s.find(sum-k)!=s.end())
        {
            return true;
        }
        

        s.insert(sum);
    }

    return false;
}

int main()
{
    int arr[6]={12,1,2,6,4,4};
    cout<<givensum(arr,6,7);

    return 0;
}