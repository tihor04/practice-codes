#include <bits/stdc++.h>

using namespace std;

bool isperfect(int m)
{
    int z=(int)sqrt(m);
    if(m==z*z)
    return true;
    else return false;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count==0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int m=arr[i]*arr[j];
               if(!isperfect(m))
               count++;
            }
        }
        
       

        cout<<count<<endl;


    }
    return 0;
}