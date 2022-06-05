#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
  string str="1239";
  sort(str.begin(),str.end(), greater<int>());
  cout<<str;
  
  


   
    return 0;
}