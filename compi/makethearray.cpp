#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    int n;
    cin>>n;
    int a[n],b[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=i;

    }
    for(int i=0;i<n;i++)
    cin>>b[i];

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int k=b[i];
        if(m[b[i]]==i)
        continue;
        else if(m[k]==n-1)
        {
            while(m[k]]!=i)
            {
                int p=m[k]-1;
                sum+=a[m[k-1]-k;
                m[k]--;
                m[arr[m[k]-1]]+1;

            }
        }
        else
        {
                
        }
    }
   
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