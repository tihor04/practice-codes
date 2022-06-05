#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    int ps[n],ns[n];
    stack<int> s;

    s.push(0);
 ps[0]=-1;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        s.pop();

        if(s.empty())
        ps[i]=-1;
        else
        ps[i]=s.top();

        s.push(i);

    }


    while(s.empty()==false)
    s.pop();

    s.push(n-1);
    ns[n-1]=n;
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        s.pop();

        if(s.empty())
        ns[i]=n;
        else
        ns[i]=s.top();

        s.push(i);
    }

   int res=INT_MIN;
   for(int i=0;i<n;i++)
   {
       int curr=arr[i];
       curr+=(i-ps[i]-1)*arr[i];
       curr+=(ns[i]-i-1)*arr[i];
       res=max(res,curr);
          }

          cout<<res;


    return 0;
}