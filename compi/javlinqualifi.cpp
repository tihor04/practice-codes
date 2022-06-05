#include <bits/stdc++.h>

using namespace std;

void findans(int arr[],n,m,x)
{
    
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int arr[n];
        int count=0;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=x)
            {
              ans.push_back(i+1);
               count++;
            }
            
        }
        if(count>=x)
        {
            cout<<count<<" ";
            for(int i=0;i<count;i++)
            cout<<ans[i]<<" ";
            cout<<endl;
            continue;
        }
        unordered_map<int,int> map;
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<x)
            {
                map[arr[i]]=i+1;
                v.push_back(arr[i]);
            }

        }
        int i=0;
        sort(v.begin(),v.end(),greater<int>());
        while(count!=x && i<v.size())
        {
            ans.push_back(map[v[i]]);
            count++;
            i++;
        }

        sort(ans.begin(),ans.end());
        cout<<count<<" ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}