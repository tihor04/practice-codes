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

node *addnode(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    return temp;

    int k=1;
    node *curr=head;
    

    if(head->data>=x)
    {
       temp->next=head;
       return temp;
    }

    while(curr->next!=NULL)
    {
        if(curr->next->data>=x)
        break;
        else
        curr=curr->next;
    }

    

   
    temp->next=curr->next;
    curr->next=temp;

    return head;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    node *curr=head;
    curr=addnode(curr,25);

    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}