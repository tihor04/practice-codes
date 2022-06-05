#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int arr[10];
        int sum1=0,sum2=0;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
            if((i+1)%2!=0)
            {
              sum1+=arr[i];
            }
            else
            sum2+=arr[i];
        }
        if(sum1>sum2)
        cout<<1<<endl;
        else if(sum2>sum1)
        cout<<2<<endl;
        else 
        cout<<0<<endl;
    }
    return 0;
}