#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int ar1[3];
        int ar2[3];
        for(int i=0;i<3;i++)
        {
            cin>>ar1[i];
        }
        for(int i=0;i<3;i++)
        {
            cin>>ar2[i];

        }
        int a=0,b=0;

        for(int i=0;i<3;i++)
        {
            if(ar1[i]>ar2[i])
            a++;
            else
            b++;
        }

        if(a>b)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
    return  0;
}