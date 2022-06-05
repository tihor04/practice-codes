#include "bits/stdc++.h"
using namespace std;

bool getbit(int a,int pos)
{
    return (a&(1<<pos))!=0;
}

int setbit(int a,int pos)
{
    return (a | (1<<pos));
}


int main(){
    int n=7;
    int arr[n]={1,2,1,2,4,1,2};

    int arr1[64];
    for(int i=0;i<64;i++)
    {
        arr1[i]=0;


    }
  int result=0;
  for(int i=0;i<64;i++)
  {
      int sum=0;
      for(int j=0;i<n;j++)
      {
          if(getbit(arr[j],i))
          sum++;
      }
      if(sum%3!=0)
      {
      result=setbit(result,i);
      }
  }

  cout<<result;


    return 0;
}