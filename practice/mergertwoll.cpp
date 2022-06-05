#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  node *next;
  node(int x)
  {
      data=x;
  next=NULL;
  }
  
};

node *merge(node *h1,node *h2)
{
    if(h1==NULL)
    return h2;

    if(h2==NULL)
    {
        return h1;

    }

     node *head=NULL,*tail=NULL,*t1=h1,*t2=h2;

     if(h1->data>h2->data)
     {
         head=h2;
         tail=h2;
         t2=t2->next;
         h2->next=h1;
         tail=tail->next;
         t1=t1->next;

     }
     else
     {
         head=h1;
         tail=h1;
         t1=t1->next;
         h1->next=h2;
         tail=tail->next;
         t2=t2->next;
     }

     while(t1!=NULL && t2!=NULL)
     {
         if(t1->data>t2->data)
         {
             
             tail->next=t2;
             tail=t2;
             t2=t2->next;


         }
         else
         {
             tail->next=t1;
             tail=t1;
             t1=t1->next;
         }
     }

     while(t1!=NULL)
     {
         tail->next=t1;
         tail=t1;
         t1=t1->next;
     }
     while(t2!=NULL)
     {
         tail->next=t2;
         tail=t2;
         t2=t2->next;
     }

     return head;
}

int main()
{
    node *head1=new node(10);
    head1->next=new node(20);
    head1->next->next=new node(30);

    node *head2=new node(5);
    head2->next=new node(25);

    node *ref=merge(head1,head2);

    while(ref!=NULL)
    {
        cout<<ref->data<<" ";
        ref=ref->next;

    }

    return 0;
}