#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t-->0)
    {
        
        int n;
        cin>>n;
        int count=0;
       

       for(int i=1;i<=n;i++)
       {
           for(int j=i;j<=n;j+=i)
           {
               if(j%i==0)
               {
                   for(int k=j;k<=n;k+=j)
                   {
                       if(k%j==i)
                       count++;
                   }
               }
           }
       }
        cout<<count<<endl;
    }
    return 0;
}