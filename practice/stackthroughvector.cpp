#include <bits/stdc++.h>

using namespace std;

struct mystack{
    
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int a=v.back();
        v.pop_back();
        return a;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool isempty()
    {
        return v.empty();
    }

    
};

int main()
{
    mystack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.size()<<endl;
    cout<<s.pop();
    return 0;
}