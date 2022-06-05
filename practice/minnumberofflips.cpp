#include "bits/stdc++.h"

using namespace std;

int findflips(int arr[],int n)
{
    bool flag=false;
    int target=-1;
    bool commit=false;
    for(int i=0;i<n-1;i++)
    {

        //to find the second group
        if(arr[i]!=arr[i+1] && flag==false)
        {
            flag=true;
           
            target=arr[i+1];
        }
        //to check the start of a new grp
       if(arr[i]==target &&commit==false)
       {
           commit=true;
          cout<<"from "<<i<<" to ";
       }

       //to check the end of the grp
      
       if(arr[i]==target && arr[i+1]!=arr[i])
       {
           commit =false;
          cout<<i<<endl;
       }
       

    }
    if(commit)
    cout<<n-1;
    else if(!commit && arr[n-1]==target)
    cout<<"from "<<n-1<<" to "<<n-1;
}


int main(){
    int arr[]={0,0,1,1,1,0,0,1,1};
    int n=9;
    findflips(arr,n);
    return 0;
}