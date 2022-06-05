#include <bits/stdc++.h>
using namespace std;

int ansfor2(int a[],int b[])
{
    int n1=b[0]-a[0];
    int n2=b[0]-a[1];
    if(n1>n2 && n2>0)
    return n2;
    else
    return n1;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n-1];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        cin>>b[i];

        bool flag=false;

        sort(a,a+n);
        sort(b,b+n-1);
        if(n==2)
        cout<<ansfor2(a,b)<<endl;
        else{
           unordered_set<int> s;
           int j=0,k=1;
           while(k<n && j<n-1)
           {
               s.insert(b[j]-a[k]);
               j++;
               k++;
           }
           if(s.size()==1)
           {
               for(auto x:s)
               cout<<x<<endl;
               
           }
           else
           cout<<b[0]-a[0]<<endl;
          
        

        
        }
    }
    return 0;
}