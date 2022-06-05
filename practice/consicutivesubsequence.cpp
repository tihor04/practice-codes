#include "bits/stdc++.h"

using namespace std;

int findsubsequence(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);

    int res=0;

    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
        {
            int k=1;
            while(true)
            {
                if(s.find(x+k)!=s.end())
                k++;
                else
                break;

            }
            res=max(res,k);
        }
    }
    return res;
}


int main()
{
    int arr[]={1,4,55,2,5,3};
    int n=6;
    cout<<findsubsequence(arr,n);
    return 0;
}