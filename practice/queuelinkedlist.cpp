#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct myqueue{
    node *front;
    node *rear;
    int size;
    myqueue()
    {
        front=NULL;
        rear=NULL;
        size=0;
    }

    void enqueue(int x)
    {
        node *temp=new node(x);
        if(front==NULL)
        {
            front=temp;
            rear=temp;

        }
        else
        {
          rear->next=temp;
          rear=rear->next;
        }

        size++;
    }

    int dequeue()
    {
        if(front==NULL)
        return -1;
         
         node *temp=front;
         int p=front->data;
         front=front->next;
         delete temp;
         size--;
         return p;

    }

    int getsize()
    {
        return size;

    }
    bool  empty()
    {
        return size==0?true:false;
    }

};

int main()
{
    myqueue q;
    q.enqueue(11);
    q.enqueue(22);
    cout<<q.dequeue()<<" ";
    cout<<q.getsize();
    return  0;
}