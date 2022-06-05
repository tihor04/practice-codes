#include "bits/stdc++.h"
using namespace std;


struct interval
{
    int st,end;
};

bool mycomp( interval  p1,interval p2)
{
    return (p1.st<p2.st);
}
void mergrarr(interval arr[],int n)
{
    int res=0;
    sort(arr,arr+n,mycomp);
    for(int i=1;i<n;i++)
    {
        if(arr[res].end>=arr[i].st)
         {
            arr[res].st=min(arr[res].st,arr[i].st);
            arr[res].end=max(arr[res].end,arr[i].end);
         }
        else
        {
            res++;
            arr[res]=arr[i];
        }

    }

    for(int i=0;i<=res;i++)
    cout<<arr[i].st<<" "<<arr[i].end<<endl;
}


int main()
{
    interval arr[]={{5,10},{3,15},{18,30},{2,7}};
    int n=4;
    mergrarr(arr,n);
    return 0;
}