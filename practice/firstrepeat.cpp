#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

int main()
{

    int arr[7]={1,5,3,4,3,5,6};
    

    const int N=1e6+2;
    int indx[N];
    for(int i=0;i<N;i++)
    {
        indx[i]=-1;

    }
    int mindix=INT_MAX;

    for(int i=0;i<7;i++)
    {
        if(indx[arr[i]]!=-1)
        {
            mindix=min(mindix,indx[arr[i]]);
        }
        else
        indx[arr[i]]=i;
    }

    if(mindix==INT_MAX)
    cout<<"-1"<<endl;
    else
    cout<<mindix;
    return 0;
}