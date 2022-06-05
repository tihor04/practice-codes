#include "bits/stdc++.h"
#define d 256
const int q=101;

using namespace std;

void findpattern(string &s1, string &s2)
{
    int h=1;
    int n=s1.length();
    int m=s2.length();

    for(int i=0;i<m-1;i++)
    {
        h=(h*d)%q;
    }

    int t=0,p=0;

    for(int i=0;i<m;i++)
    {
        t=(t*d+s1[i])%q;
        p=(p*d+s2[i])%q;
    }

    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool flag=true;
        
            for(int  j=0;j<m;j++)
            {
                if(s2[j]!=s1[i+j])
                  {
                      flag=false;
                      break;
                  }

            }
            if(flag)
            cout<<i<<" ";

        }

        if(i<n-m)
        {
            t=((d*t-t*s1[i]*h)+s2[i+m])%q;
            if(t<0)
            t=t+q;
        }
    }

}

int main()
{
    string s1="ABCABCD";
    string s2="ABCD";
    findpattern(s1,s2);
    return 0;
}