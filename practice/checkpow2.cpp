#include "bits/stdc++.h"

using namespace std;

 bool ispow2(int n)
 {
     if( n==0)
     return false;
     if((n &(n-1))==0)
     return true;
     else 
     return false;
 }
 int countbit(int n)
 {
     int k=0;
     while(n!=0)
     {
         n=(n &(n-1));
         k++;
     }
     return k;
 }
int  main()
{
    cout<<countbit(5);
    return 0;
}