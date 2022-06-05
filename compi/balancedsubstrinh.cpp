#include <bits/stdc++.h>

using namespace std;

pair<int,int> findsubtr(char arr[],int n ,int a,int b)
{
    if(a==b)
    {
        return {1,n};

    }
    if(a==0 || b==0 || n==0|| n==1)
    return {-1,-1};

    int i=0;

    for(int i=0;i<n;i++)
    {
        a=0,b=0;
        if(arr[i]=='a')
        a++;
        else
        b++;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]=='a')
           a++;
          else if (arr[j]=='b')
           b++;
           if(a==b)
           return {i,j};


        }
    }
    return {-1,-1};



}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        char arr[n];
        int a,b;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]=='a')
            a++;
            else 
            b++;;
        }

        pair<int,int> ans=findsubtr(arr,n,a,b);
        cout<<ans.first<<" "<<ans.second<<endl;
       


        
    }
    return 0;
}