#include "bits/stdc++.h"

using namespace std;
int getbit(int num,int posi)
{
    if(num & (1<<posi)!=0)
    return 1;
    else return 0;
}
int setbit(int num,int posi)
{
    return (num | (1<<posi));
}
int cleatbit(int num,int posi)
{
 return (num & ~(1<<posi));
}
int updatebit(int num ,int posi,int value)
{
    int n=(num & ~(1<<posi));
    return (n |(value<<posi));

}
int main()
{
 cout<<updatebit(5,1,1);
    return 0;
}