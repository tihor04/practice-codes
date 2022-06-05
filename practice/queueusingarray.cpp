#include <bits/stdc++.h>

using namespace std;

struct myqueue{
    int front;
    int rear;
    int *arr;
    myqueue(int cap)
    {
        rear=-1;
        front=-1;
        arr=new int[cap];
    }

    void enqueue(int x)
    {
        if(rear==-1)
        {
            front++;
        }

        arr[rear++]=x;
    }

    int dequeue()
    {
        if(rear==-1)
        return -1;
        
        int p=arr[front];
        front++;
        return p;

    }

    int getfront()
    {
        if(front==-1)
        return -1;
        else
        return arr[front];
    }
    int getrear()
    {
        if(rear==-1)
        return -1;
        else 
        return arr[rear];
    }

    int size()
    {
        if(rear==-1)
        return 0;
        else
        return rear-front+1;
    }

    bool isempty()
    {
        if(rear==-1)
        return true;
        else 
        return false;
    }
};

int main()
{
    myqueue q(5);
    q.enqueue(11);
    q.enqueue(22);
    cout<<q.dequeue()<<" ";
    cout<<q.size();
    return 0;
}