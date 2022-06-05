#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node *insertathead(node *head,int x)
{
    node *toadd=new node(x);
    if(head==NULL)
    return toadd;

    head->prev=toadd;
    toadd->next=head;
    return toadd;
}

node *insertatend(node *head,int x)
{
    node *toadd=new node(x);
    if(head==NULL)
    return toadd;

    node *temp=head;
    while(temp->next!=NULL)
    temp=temp->next;

    temp->next=toadd;
    toadd->prev=temp;

    return head;
}

node *reverselist(node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node *curr=NULL;
    node *temp=head;
    while(temp!=NULL)
    {
        curr=temp->prev;
        temp->prev=temp->next;
        temp->next=curr;

        temp=temp->prev;
    }
    return curr->prev;
}

node *deletehead(node *head)
{
    if(head==NULL)
    return NULL;

    if(head->next==NULL)
    {
        delete head;
        return NULL;
     }

     node *temp =head->next;
       delete head;

     temp->prev=null;
     return temp;
     
    
}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);

    head->prev=NULL;
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=NULL;

    node *ref = head;
    ref=insertathead(ref,5);
    ref=insertatend(ref,40);
    ref=reverselist(ref);

    while(ref!=NULL)
    {
        cout<<ref->data<<" ";
       ref = ref->next;
    }
    return 0;
}