#include "bits/stdc++.h"

using namespace std;

int factorial(int n)
{
 if(n==1)
 return 1;
 int prev=factorial(n-1);
 return n*prev;
}
 

 int main()
 {

     int n=4;
     cout<<factorial(n);
     return 0;
 }