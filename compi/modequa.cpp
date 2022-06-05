#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        unordered_map<int,int> m;
        int mino=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            if(arr[i]<mino)
            mino=arr[i];
        
        }
         bool flag=true;

         for(int i=0;i<n;i++)
         {
             if(arr[i]==mino)
             continue;

             int k=arr[i]/2;
             if(arr[i]%2==0)
             k--;

             if(mino<=k)
             {
                 continue;
             }
             else
             {
                 flag=false;
                 break;
             }
         }

        


        if(flag)
        cout<<n-m[mino]<<endl;
        else
        cout<<n<<endl;



        
    }
    return 0;
}