#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;

    ll arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    if(arr[0]==1)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            {
                cout<<-1<<endl;
                return;
            }
        }
        if(arr[i-1]%arr[i]!=0)
        {
            cout<<-1<<endl;
            return;
        }
    }

 ll sum=arr[0];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        cout<<arr[i]<<" ";
        else
        {
            sum+=arr[i];
            cout<<sum<<" ";
        }

    }
    cout<<endl;
    return;


   
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


  int t;
  cin>>t;


  while(t-->0) 
  solve();

 return 0;
}