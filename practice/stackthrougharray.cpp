#include <bits/stdc++.h>

using namespace std;

struct mystack{
    int cap;
    int *arr;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        else 
        {
            top++;
            arr[top]=x;
        }
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else
        {
            int p=arr[top];
            top--;
            return p;
        }
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;


        }
        else
        {
            return arr[top];
        }
    }

    int size()
    {
        return top+1;
    }

    bool isempty()
    {
        return (top==-1);
    }

};

int main()
{

    mystack s(3);
   s.push(10);
   s.push(20);
   s.push(30);

   cout<<s.peek()<<endl;
   s.pop();

   cout<<s.size()<<endl;

   cout<<s.pop()<<endl;

   cout<<s.size();

    return 0;
}