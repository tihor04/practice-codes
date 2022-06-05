#include "bits/stdc++.h"

using namespace std;

void printno(int n)
{
    if(n==0)
    return ;
    
    printno(n-1);
    cout<<n<<" ";
}
int main()
{

    int n=16;
    printno(n);
    return 0;
}