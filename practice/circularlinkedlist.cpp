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

node *insertathead(node *head,int x)
{
  node *toadd=new node(x);
  if(head==NULL)
  {
      toadd->next=toadd;
      return toadd;
  }
  toadd->next=head->next;
  head->next=toadd;
  int t=head->data;
  head->data=toadd->data;
  toadd->data=t;
  return head;
}

node *insertatlast(node *head,int x)
{
    node *toadd=new node(x);
    if(head==NULL){
    toadd->next=toadd;
    return toadd;
    }

    if(head->next==head)
    {
        toadd->next=head;
        head->next=head;
        return head;
    }

    node *temp=head;
    while(temp->next->next!=head)
    temp=temp->next;

    toadd->next=temp->next;
    temp->next=toadd;

    int t=toadd->data;
    toadd->data=toadd->next->data;
    toadd->next->data=t;

    return head;
}

node *deletehead(node *head)
{
    if(head==NULL)
    return NULL;

    if(head->next==head)
    {
        delete head;

        return NULL;
    }

    node *temp=head->next;

    int t=temp->data;
    temp->data=head->data;
    head->data=t;

    head->next=temp->next;

    delete temp;

    return head;
}

node *deletekth(node *head,int k)
{
    if(k==1)
    return deletehead(head);

    node *curr=head;
    for(int i=0;i<k-2;i++)
    curr=curr->next;

    node *temp=curr->next;
    curr->next=temp->next;
    delete temp;

    return head;
}

int main()
{
    node *head=new node(10);
    head->next=new node(5);
    head->next->next=new node(20);
    head->next->next->next=head;

    

    node *curr=head;
    curr=insertathead(curr,1);
    curr=insertatlast(curr,100);
    curr=deletekth(curr,3);

   
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    while(curr!=head);
    
    return 0;
}