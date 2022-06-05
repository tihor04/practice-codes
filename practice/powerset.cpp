
#include "bits/stdc++.h"
using namespace std;

void printpowerset( string str)
{
    int n=str.length();
    int power=pow(2,n);

    for(int i=0;i<power;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))!=0)
            cout<<str[j];
        }
         cout<<endl;
        
    }
   

}

int main()
{
    string str="abc";
    printpowerset(str);
    return 0;
}