#include <bits/stdc++.h>

using namespace std;
vector<int> findprevgreater(int arr[],int n)
{
    stack<int> s;
    vector<int> ans;
    s.push(0);
//    cout<<-1<<" ";
  

  ans.push_back(-1);


    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[i]>=arr[s.top()])
        s.pop();

        if(s.empty())
       ans.push_back(-1);
        else
       ans.push_back(arr[s.top()]);

        s.push(i);
    }

    return ans;

}



int main()
{
    int arr[]={5,15,10,8,6};
    int arr3[]={12,10,3};   
    int n=8;
  vector<int> v= findprevgreater(arr,n);
  reverse(v.begin(),v.end());
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
    return 0;
}