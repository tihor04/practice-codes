#include <bits/stdc++.h>

using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key=k;
         left=right=NULL;
    }
};

Node* insertnew(Node* &root,int k)
{
    if(root==NULL)
    return new Node(k);

    if(root->key>k)
    root->left=insertnew(root->left,k); 
    else if(root->key<k)
    root->right=insertnew(root->left,k);
    

    return root;

    
}

void inorder(Node* root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int  main()
{
     Node* root=new Node(10);
     root->left=new Node(5);
     root->right=new Node(15);
     root->right->left=new Node(12);
     root->right->right=new Node(18);

     Node* ref=insertnew(root,11);
     inorder(ref);
    return 0;
}