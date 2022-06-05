#include <bits/stdc++.h>
using namespace std;

void findspan(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    cout<<1<<" ";

    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
        {
            s.pop();
        }

        if(s.empty())
        cout<<i+1<<" ";
        else
        cout<<i-s.top()<<" ";

        s.push(i);
    }
}

int main()
{
    int arr[9]={60,10,20,30,25,30,33,22,90};
    int n=9;
    findspan(arr,n);
    return 0;
}