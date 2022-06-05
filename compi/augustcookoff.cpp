#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int maxnum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
            if(arr[i]>maxnum)
            {
                maxnum=arr[i];
                
            }
        }
             
      int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==maxnum && i>=k-1)
            {
                ans+=n-i;
            }
           
        }
        
       

        cout<<ans<<endl;

        
    }
    return 0;
}