#include <bits/stdc++.h>

using namespace std;

int findsquare(int n,int c)
{
    if(n<4)
    return c;

    int k=(int)sqrt(n);
    return k*c;

}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,c;
        cin>>n>>c;
        cout<<findsquare(n,c)<<endl;
    }
    return 0;

}