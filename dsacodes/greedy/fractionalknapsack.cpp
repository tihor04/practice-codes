#include <bits/stdc++.h>

using namespace std;

bool mycomp(pair<int,int> a ,pair<int,int> b)
{
    return (double)a.second/a.first>(double)b.second/b.first;
}

int main()
{

    pair<int,int> arr[3]={{50,600},{20,500},{30,400}};

    sort(arr,arr+3,mycomp);

    int curr=70;
    int res=0;

    for(int i=0;i<3;i++)
    {
        if(arr[i].first<=curr)
        {
            res+=arr[i].second;
            curr-=arr[i].first;
        }
        else
        {
            res+= arr[i].second*((double)curr/arr[i].first);
            cout<<res<<endl;
            break;
        }
    }
    return 0;
}