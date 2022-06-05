#include <bits/stdc++.h>

using namespace std;

bool mycomp(pair<int,int> a,pair<int,int> b)
{
    return a.second>b.second;
}

int main()
{

    pair<int,int> arr[4]={{4,70},{1,80},{1,30},{1,100}};

    sort(arr,arr+4,mycomp);

  

    bool visited[4]={false};
    int res=0;

    for(int i=0;i<4;i++)
    {
        if(visited[arr[i].first-1]==false)
        {
            res+=arr[i].second;
            visited[arr[i].first-1]=true;
        }

    }

    cout<<res<<endl;



    return 0;

}