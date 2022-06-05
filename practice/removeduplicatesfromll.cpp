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

node *deletedup(node *head)
{
    if(head==NULL)
    return NULL;

    node *temp=head;


    while(temp->next!=NULL)
    {
    
    
        if(temp->data==temp->next->data)
        {
            node *curr=temp->next;
            temp->next=temp->next->next;
            delete curr;
        }
        else
        temp=temp->next;
    }

    return head;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(20);
    head->next->next->next=new node(30);
    head->next->next->next->next=new node(40);

    node *ref=head;
    ref=deletedup(head);

    while(ref!=NULL){
    cout<<ref->data<<" ";
    ref=ref->next;
    }
    

    return 0;
}