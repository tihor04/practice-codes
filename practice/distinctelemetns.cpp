#include "bits/stdc++.h"

using namespace std;

int main()
{

    int arr[6]={1,22,22,22,1,3};
    unordered_set<int> set;
    for(int i=0;i<6;i++)
    {
        set.insert(arr[i]);
    }

    cout<<set.size();
    return 0;

}