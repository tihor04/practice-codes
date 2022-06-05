#include <bits/stdc++.h>
using namespace std;

struct mystack{
   vector<int> v;
   vector<int> min;
    void push(int x)
    {
        v.push_back(x);
        if(min.empty()==false && x<min.back())
        min.push_back(x);
        else if(min.empty()==true)
        min.push_back(x);

    }

    int pop()
    {
        int p=v.back();
        if(min.empty()==false && p==min.back())
        min.pop_back();
        
        v.pop_back();
        return p;
    }

    int getmin()
    {
       return min.back();
    }
};

int main()
{
    mystack s;
    s.push(2);
    s.push(22);
    s.push(1);
    s.pop();
    cout<<s.getmin();

    return 0;
}