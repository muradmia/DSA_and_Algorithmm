#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* left;
      Node* right;
    Node(int val)
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
        if( l== -1){
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

void levelOrder(Node* root)
{
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    int sum=0;
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        sum= sum+p->data;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    cout<<sum<<endl;
}

int main()
{
    Node* root=input();
    levelOrder(root);
    return 0;
}