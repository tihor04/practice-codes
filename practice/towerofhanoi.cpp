#include "bits/stdc++.h"

using namespace std;

void toh(int n, char start, char mid, char desti)
{
    if(n==0)
    return;
    toh(n-1,start,desti,mid);
    cout<<"move from "<<start<<" to "<<desti<<endl;
    toh(n-1,mid,start,desti);
}

int main()
{
    toh(3,'A','B','C');
    return 0;

}