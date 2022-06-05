#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t-->0)
    {
        const int c=200001;
        int brr[c];
        for(int i=1;i<c;i++)
        {
            brr[i]=i-1;
        }

        int n;
        cin>>n;
         
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             brr[arr[i]]--;

         }

         int sum=0;
         for(int i=0;i<n;i++)
         {
             if(brr[arr[i]]>=0)
             sum+=1;
         }

         cout<<sum<<endl;
    }
    return 0;

}