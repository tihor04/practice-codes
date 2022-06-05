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
        int arr[n];
        int g=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(i>0 && arr[i]>arr[0])
           g=1;

       }

       if(g==1)
        cout<<-1<<endl;
        else if(n==1)
        cout<<0<<endl;
        else
        {
             vector<int> l(n,-1);
             stack<int> st;
             st.push(n-1);

             for(int i=n-2;i>=0;i--)
             {
                 while(!st.empty() && arr[st.top()]<arr[i])
                 {
                     l[st.top()]=i;
                     st.pop();
                 }
                 st.push(i);
             }
             while(!st.empty())
             {
                 l[st.top()]=-1;
                 st.pop();
             }
             int ip=n-1;
             int ans=0;
             if(l[n-1]==-1)
             cout<<1<<endl;
             else{
                 while(ip!=0)
                 ans++;
                 if(ip==-1)
                 {
                     ans--;
                     break;
                 }
                 ip=l[ip];
                 
             }
             cout<<ans<<endl;

        }
    }
    return 0;
}