#include <bits/stdc++.h>


using namespace std;

struct node{
    int k;
    node *right;
    node *left;
    node(int key)
    {
        k=key;
        right=left=NULL;
    }
};

void spiraltraversal(node *root)
{
    if(root==NULL)
    return;
    stack<node*> st1;
    st1.push(root);
    stack<node*> st2;
    while(st1.empty()==false && st2.empty()==false)
    {
       while(st1.empty()==false)
       {
           node* curr=st1.top();
           st1.pop();
           cout<<curr->k<<" ";
           if(curr->left!=NULL)
           st2.push(curr->left);
           if(curr->right!=NULL)
           st2.push(curr->right);
       }   

       while(st2.empty()==false)
       {
           node *curr=st2.top();
           st2.pop();
           cout<<curr->k<<" ";
          
           if(curr->right!=NULL)
           st1.push(curr->right);
           if(curr->left!=NULL)
           st1.push(curr->left);
       }
    }
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(8);
    root->left->left->right=new node(9);
    root->left->right= new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->left->left=new node(10);
    root->right->right=new node(7);

    spiraltraversal(root);
    return 0;
}