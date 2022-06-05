#include <bits/stdc++.h>
using namespace std;

bool matched(char a,char b)
{
    return ((a=='('&& b==')') ||
    (a=='{' && b=='}') || 
    (a=='[' && b==']'));
}

bool isbalanced(string str )
{
    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
          if(str[i]=='(' || str[i]=='{' || str[i]=='[')
          s.push(str[i]);
          else
          {
              if(s.empty())
              return false;
              if(matched(s.top(),str[i]))
              s.pop();
              else 
              return false;
          }
    }
    return true;
}

int main()
{
    string str ="())";
    cout<<isbalanced(str);
    return 0;
}