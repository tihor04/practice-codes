#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
{
 int a,b,c;
 
 cin>>a>>b>>c;
 int sum=a+b+c;
 if(sum==0 ||sum==3)
 cout<<"0"<<endl;
 else
 cout<<"1"<<endl;
}
    return 0;
}