#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,q;
        cin>>n>>q;
          int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        unordered_map<int,int> s;
        for(int i=0;i<n;i++)
        {
          s[arr[i]%2]++;
        }
    

        while(q-->0)
        {
            int i,j;
            cin>>i>>j;
            int even=0,odd=0;
            if(i==1 && j==n)
            {
                odd=s[1];
                even=s[0];
            }
            else
            {
                for(int k=i-1;k<j;k++)
                {
                    if(arr[k]%2==0)
                    even++;
                    else
                    odd++;
                }
            }

            int ans=0;
            if(even>=3)
            ans+=(even*(even-1)*(even-2))/6;

            if(odd>=2)
            ans+=((odd*(odd-1))/2)*even;
            

            cout<<ans<<endl;
        }


        
    }
    return 0;
}