#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    int n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    ll cum[n];
    cum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cum[i]=cum[i]+cum[i-1];
    }
    
    for(int i=0;i<m;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            int ap=j+1;
            if(b[i]<=cum[j] && j==0)
            {
                cout<<ap<<" "<<b[i]<<endl;
                break;
            }
            else if(b[i]<=cum[j] && j!=0)
            {
                ll k=b[i]-cum[j-1];
                cout<<ap<<" "<<k<<endl;
                break;
                
            }
            
        }
        
        
    }
    
    
}
int main(){
    
    // write your code here
    solve();
    return 0;
}