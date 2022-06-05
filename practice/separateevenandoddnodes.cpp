#include <bits/stdc++.h>

using namespace std;
struct node{
 int data;
 node *next;
 node(int x){
     data=x;
     next=NULL;
 }
};

node *separate(node *head)
{
    if(head==NULL || head->next==NULL)
    return head;

    node *evenhead=NULL,*even=NULL;
    node *oddhead=NULL,*odd=NULL;

    node *temp=head;

    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        {
            if(even==NULL)
            {
                evenhead=temp;
                even=temp;

            }
            else
            {
                even->next=temp;
                even=even->next;
            }
        }
        else{
            if(odd==NULL)
            {
                oddhead=temp;
                odd=temp;
            }
            else
            {
                odd->next=temp;
                odd=odd->next;
            }
        }
        temp=temp->next;
    }

    if(evenhead==NULL)
    return oddhead;
    else if(oddhead==NULL)
    return evenhead;

    even->next=oddhead;

    return evenhead;
}

int main()
{
    node *head=new node(11);
    head->next=new node(22);
    head->next->next=new node(13);
    head->next->next->next=new node(10);
    head->next->next->next->next=new node(19);

    node *ref=head;
    ref=separate(head);

    while(ref!=NULL)
    {
        cout<<ref->data<<" ";
        ref=ref->next;
    }
    return 0;
}