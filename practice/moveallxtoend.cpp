#include "bits/stdc++.h"

using namespace std;

void movextoend(string s,int i)
{
    if(s.length()==0)
    {
      for(int k=0;k<i;k++)
      {
          cout<<"x";
      }
      return;
    }
    if(s[0]!='x')
    cout<<s[0];
    else
    i++;
    movextoend(s.substr(1),i);
}

int main()
{
    string s="appxepxxpxx";
    movextoend(s,0);
    return 0;
}