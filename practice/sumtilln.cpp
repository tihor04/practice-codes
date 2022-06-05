#include "bits/stdc++.h"
using namespace std;


int findsum(int n){
    if(n==0)
    return 0;

   int prevsum=findsum(n-1);

   return n+prevsum;
}

int main()
{
    int n=4;
   cout<<findsum(n)<<endl;
    return 0;
}