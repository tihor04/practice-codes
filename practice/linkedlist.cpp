#include <bits/stdc++.h>

using namespace std;

struct node
{
 int data;
 node *next;
 node(int x)
 {
     data=x;
     next= NULL;
 }
};

node *inserthead(node *head,int x)
{
    node *curr=new node(x);
    if(head==NULL)
    return curr;

    curr->next=head;
    head=curr;
    return curr;


}

node *insertatend(node* head,int x)
{
    node *add=new node(x);
    if(head==NULL)
    {
        head=add;
        return head;

    }

    node *temp=head;
    while(temp->next!=NULL)
    temp=temp->next;

    temp->next=add;

    return head;
}

node *deletehead(node *head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
   node *temp=head->next;
   head=temp;
   return head;
}

node *insertat(node *head,int x,int pos)
{
     
    node *temp=new node(x);
    if(pos==1)
    {
     temp->next=head;

     return temp;   
    }

    node *curr=head;

    for(int i=0;i<=pos-2&&curr!=NULL;i++)
    {
        curr->next;
    }

    if(curr==NULL)
    return head;

    temp->next=curr->next;
      curr->next=temp;

      return head;





}

int main()
{
    node *head=new node(10);

    node *temp1=new node(20);

    node *temp2=new node(30);

    head->next=temp1;
    temp1->next=temp2;

    node *ref=  inserthead(head,9);
    ref=insertatend(ref,40);
    ref=inserthead(ref,1);
    ref=deletehead(ref);
    ref=insertat(ref,2,3);

  

    while(ref!=NULL)
    {
        cout<<ref->data<<" ";
        ref=ref->next;

    }

    return 0;

    

   
    return 0;
}