#include "bits/stdc++.h"
using namespace std;
int main(){
    int n=8,k=31;
    int arr[n]={2,4,7,11,14,16,20,21};
    int st=0;
    int end=n-1;
    bool flag=0;
    while(st<end)
    {
        int sum=arr[st]+arr[end];
        if(sum>k)
        {
            end--;
        }
        else if(sum<k)
        {
            st++;
        }
        else
        {
            flag=1;
            break;
        }

    }
    cout<<flag;
    return 0;
}