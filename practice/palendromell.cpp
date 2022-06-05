#include <bits/stdc++.h>

using namespace std;


struct  node{
 char data;
 node *next;
 node (char x){
     data=x;
     next=NULL;
 }
};
void reverse(node *head)
{
    if(head==NULL ||head->next==NULL)
    return;

    node *prev=head;
    node *curr=head->next;
    while(curr!=NULL)
    {
        node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
}

node *findmin(node *head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    node *slow=head,*fast=head;

    while(fast!=NULL|| fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
}
int main()
{
    node *head=new node('G');
    head->next=new node('F');
    head->next->next=new node('G');

  node *mid=findmin(head);
  reverse(mid);
  node *temp=head;
  bool flag=false;
  while(mid!=NULL)
  {
      if(temp->data!=mid->data)
      {
          cout<<"false";
          flag=true;
          break;
      }
      else
      {
          mid=mid->next;
          temp=temp->next;
      }



  }
  if(!flag)
  cout<<"true";


  
    return 0;
}