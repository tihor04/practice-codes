#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,p,k;
        cin>>n>>p>>k;
        int z=0;

        if(n%k==0)
        z=n/k;
        else
        z=n/k+1;

        int arr[z];
        for(int i=0;i<z;i++)
        {
            arr[i]=k*i;
        }

        int num=p%k+1;
        int count=0;
        bool flag=true;
        
        while(num!=0)
        {
            for(int i=0;i<z;i++)
            {
                if(arr[i]==p)
                {
                 count++;
                cout<<count<<endl;
                flag =false;
                break;
                }

                else
                {
                    count++;
                    arr[i]++;
                }
            }
            if(flag==false)
            break;
            else
            num--;
        
        }
    }
    return 0;
}