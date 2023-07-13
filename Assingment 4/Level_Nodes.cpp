#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* left;
      Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input()
{
    int data;
    cin>>data;
    Node* root;
    if(data==-1) root=NULL;
    else root=new Node(data);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l== -1){
            myLeft=NULL;
        }
        else{
            myLeft=new Node(l);
        }

        if(r==-1){
            myRight=NULL;
        }else{
             myRight=new Node(r);
        }
        f->left=myLeft;
        f->right=myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    return root;
}

void levelOrder(Node* root,int l)
{
    if(root==NULL) return;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    bool flag=false;
    while(!q.empty())
    {
        pair<Node*,int> p=q.front();
        q.pop();
        Node* f=p.first;
        int level=p.second;
        if(l==level)
        {
            flag=true;
            cout<<f->data<<" ";
        }
        if(f->left) q.push({f->left,level+1});
        if(f->right) q.push({f->right,level+1});
    }
    if(flag==false )
    {
        cout<<"Invalid";
    }
    
}

int main()
{
    Node* root=input();
    int l;
    cin>>l;
    levelOrder(root,l);
    
    return 0;
}