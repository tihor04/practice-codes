#include <bits/stdc++.h>

using namespace std;
bool mycomp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

int main()
{
    pair<int,int> arr[4]={{2,3},{1,4},{5,8},{6,10}};
    sort(arr,arr+4,mycomp);

       for(int i=0;i<4;i++)
       {
           cout<<arr[i].first<<" "<<arr[i].second<<endl;
           
       }
    int res=1;
    int curr=arr[0].second;
    for(int i=1;i<4;i++)
    {
        if(curr<=arr[i].first)
        {
            res++;
            curr=arr[i].second;
            cout<<curr<<endl;
        }
    }

    cout<<res<<endl;



    return 0;
}