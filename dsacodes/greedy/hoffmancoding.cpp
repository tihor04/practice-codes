#include <bits/stdc++.h>

using namespace std;

struct node{

    //creating a new data structre to make sure we have the perfect tree;
    int freq;
    char ch;
    node *left,*right;
    node(int f,char c)
    {
    this->freq=f;
    this->ch=c;
    this->left=NULL;
    this->right=NULL;


    }

};   

struct mycomp{
    bool operator()(node *l,node *r)
    {
        return r->freq >l->freq;
    }
};

void printnodes(node *root,string str)
{
    if(root==NULL)
    return;

    if(root->ch!='$'){
    cout<<root->ch<<" "<<root->freq<<endl;
    return ;
    }


    printnodes(root->left,str+'0');
    printnodes(root->right,str+'1');
}


int main()
{

    pair<char,int> arr[5]={{'a',10},{'b',50},{'b',20},{'e',40},{'f',80}};

    priority_queue<node*,vector<node*>,mycomp> pq;

    for(int i=0;i<5;i++)
    {
        pq.push(new node(arr[i].second,arr[i].first));

    }

    while(pq.size()>1)
    {
        node *left=pq.top();
        pq.pop();
        node *right=pq.top();
        pq.pop();

        node* present=new node(left->freq+right->freq,'$');
        present->left=left;
        present->right=right;

        pq.push(present);
    }

    printnodes(pq.top(),"");





    return 0;
}