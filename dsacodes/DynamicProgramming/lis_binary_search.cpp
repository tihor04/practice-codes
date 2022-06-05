#include <bits/stdc++.h>

using namespace std;


int ceilindex(vector<int> list,int l,int r ,int x)
{
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(list[m]>=x)
        r=m;
        else
        l=m+1;
    }
    return r;
}

int lis(int arr[],int n)
{
    vector<int> list;
    int len=1;
    list[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>list[len-1])
        {
            list[len]=arr[i];
            len++;
        }
        else
        {
            int c=ceilindex(list,0,len-1,arr[i]);
            list[c]=arr[i];
        }


    }
    return len;
}



int main()
{
    int n=7;
     int arr[n]={4,10,6,8,11,2,20};

     cout<<lis(arr,n);
    return 0;
}