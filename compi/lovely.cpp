#include <bits/stdc++.h>
using namespace std; 
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        vector<ll> even,odd;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2)
            even.push_back(arr[i]);
            else
            odd.pop_back(arr[i]);
        }
        if(even.size()==0 || odd.size()==0)
        cout<<"-1"<<endl;
        else
        {
            for(ll i=0;i<odd.size();i++)
            cout<<odd[i]<<" ";
            for(ll i=0;i<even.size();i++)
            cout<<even[i]<<" ";

            cout<<endl;
        }
    }
    return 0;

}