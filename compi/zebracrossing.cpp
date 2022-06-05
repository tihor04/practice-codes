#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void ans()
{
 ll n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        int dif=0;
        char b=a[0];
        for(ll i=1;i<n;i++)
        {
            if(b!=a[i])
            dif++;
            b=a[i];
        }

        if(dif>k){
        cout<<-1<<endl;
        return;
        }
        
            if(a[0]=='0')
            {
                if(k%2)
                {
                    for(ll i=a.size()-1;i>=0;i--)
                    {
                        if(a[i]=='1')
                        cout<<i+1<<endl;
                        return;
                    }
                }
                else
                {
                    for(ll i=a.size()-1;i>=0;i--)
                    {
                        if(a[i]=='0')
                        cout<<i+1<<endl;
                        return;
                    }

                }
            }
            else
            {
                 if(k%2)
                {
                    for(ll i=a.size()-1;i>=0;i--)
                    {
                        if(a[i]=='0')
                        cout<<i+1<<endl;
                        return;
                    }
                }
                else
                {
                    for(ll i=a.size()-1;i>=0;i--)
                    {
                        if(a[i]=='1')
                        cout<<i+1<<endl;
                        return;
                    }

                }

            }
        }


int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        ans();
    }
    return 0;
}