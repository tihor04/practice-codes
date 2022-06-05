#include <bits/stdc++.h>

using namespace std;

struct node{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

// int findheight(node *root)
// {
//     if(root==NULL)
//     return 0;
//     else
//     return max(findheight(root->left),findheight(root->right))+1;
// }

// void findklevel(node *root,int k)
// {
//     if(root==NULL)return;
//     if(k==0)
//     cout<<root->key<<" ";
//     findklevel(root->left,k-1);
//     findklevel(root->right,k-1);
// }

void levelorder(node *root)
{
    if(root==NULL)return ;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
    }
    
}

int sizeoftree(node *root)
{
    if(root==NULL)
    return 0;
    int size=0;
    queue<node*> q;
    q.push(root);
   
    while(q.empty()==false)
    {
        node *curr=q.front();
        q.pop();
        size++;
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
    }
    return size;
}

void leftsidview(node *root)
{
    if(root==NULL)
    return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    bool isfirst=true;

    while(q.size()>1)
    {
        node *curr=q.front();
        q.pop();
        if(isfirst)
        {
            cout<<curr->key<<" ";
            isfirst=false;
        }
        if(curr==NULL)
        {
            q.push(NULL);
            isfirst=true;
            continue;
        }
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
   
    }
}




int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->left->left=new node(8);
    root->left->right=new node(7);
    root->left->right->left=new node(9);
    root->left->right->right=new node(15);
    root->right=new node(30);
    root->right->right=new node(6);

    // levelorder(root);
    // cout<<sizeoftree(root);
    leftsidview(root);

    return 0;
}