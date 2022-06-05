#include "bits/stdc++.h"

using namespace std;

void replace(string s,int i){

  if(i==s.length())
  return;

  if(s[i]=='p'&&s[i+1]=='i')
  {
    cout<<"3.14";
    i++;
  }
  else
  cout<<s[i]<<s[i+1];
  replace (s,i+1);


}

int main()
{

  string s="pipppppipipi";
  replace(s,0);
  return 0;
}