#include "bits/stdc++.h"
using namespace std;

bool checkprime(int a)
{
    if(a==2 ||a==3)
    return true;
    if(a%2==0|| a%3==0)
    return false;
    for(int i=5;i*i<=a;i+=6)
    {
        if(a%i==0||a%(i+2)==0)
        return false;
    }
    return true;


}

int main()
{
    int k=73;
    cout<<checkprime(k);
    return 0;
}