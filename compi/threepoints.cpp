#include <bits/stdc++.h>

using namespace std;

bool findpath(pair<float,float> arr[], int n)
{
  if(arr[1].first==arr[0].first)
  {
      if(arr[2].second==arr[2].second)
      return true;
      else
      return
      false;
  }   
  if(arr[2].first==arr[1].first)
  {
      if(arr[1].second==arr[0].second)
      return true;
      else
      return false;
  }
 float m1=(arr[1].second-arr[0].second)/(arr[1].first-arr[0].first);
 float m2=(arr[2].second-arr[1].second)/(arr[2].first-arr[1].first);
 if((m1==m2) || m1==-1*m2)
 return true;
 if(m1==0 || m2==0)
 return false;
 if(m1==-1.0/m2)
 return true;
 else 
 return false;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {

        pair<float,float> arr[3];
        for(int i=0;i<3;i++)
        {
           float a,b;
           cin>>a>>b;
           arr[i]={a,b};
        }

        bool res=findpath(arr,3);
        if(res)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}