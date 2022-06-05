#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={6,2,5,4,1,5,6};
    int n=7;

    stack<int> s;
    s.push(0);
    int res=INT_MIN;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            int tp=s.top();
            s.pop();
            int curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false)
    {
        int tp=s.top();
        s.pop();
        int curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
        res=max(res,curr);
    }

    cout<<res;
    return 0;
}