#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int arr[6];
        for(int i=0;i<6;i++)
        cin>>arr[i];

          bool foundin1=false;
        
            if(arr[0]==arr[2] && arr[1]==arr[3])
            foundin1=true;
            else if(arr[0]==arr[3] && arr[1]==arr[2])
            foundin1=true;

            if(foundin1==true)
            {
                cout<<1<<endl;
                continue;
            }

            bool foundin2=false;
            if(arr[0]==arr[4] && arr[1]==arr[5])
            foundin2=true;
            else if(arr[0]==arr[5] && arr[1]==arr[4])
            foundin2=true;

            if(foundin2)
            {
                cout<<2<<endl;
                continue;
            }

            cout<<0<<endl;

        

    }
    return 0;
}