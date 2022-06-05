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

node *pairwiseswap(node *head)
{
    if(head==NULL || head->next==NULL)
    return head;

    node *first=head;
    node *sec=head->next;
    while(first->next!=NULL && first!=NULL)
    {
        int t=first->data;
        first->data=sec->data;
        sec->data=t;
        first=first->next->next;
        sec=sec->next->next;

    }

    return head;
}

int main()
{

    node *head=new node(2);
    head->next=new node(1);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);

    node *ref=head;
    ref=pairwiseswap(head);

    while(ref!=NULL)
    {
        cout<<ref->data;
        ref=ref->next;
    }


    return 0;
}