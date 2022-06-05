#include <bits/stdc++.h>

using namespace std;

struct mystack{
    int *arr;
    int cap;
    int top;
    int bot;
    mystack(int c)
    {
        cap=c;
        bot=c;
        top=-1;
        arr=new int[cap];

    }

    void push1(int x)
    {
        if(top>bot-1)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void push2(int x)
    {
        if(top>bot-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        bot--;
        arr[bot]=x;
    }

    int pop1()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        int t=arr[top];
        top--;
        return t;
    }

    int pop2()
    {
        if(bot==cap)
        {
            cout<<"stack is empty"<<endl;
            return -1;

        }
        int t=arr[bot];
        bot++;
        return t;
    }
   int size1()
   {
       return top+1;
   }
   int size2()
   {
       return cap-bot;
   }
};

int main()
{

   mystack s(5);
   s.push1(10);
   s.push2(10);
   s.push1(30);
   s.push1(22);
   cout<<s.size1()<<" "<<s.size2()<<endl;
   cout<<s.pop1();
    return 0;
}