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

void leaf(Node* root,vector<int> &v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->data);
        return;
    }
    else
    {
        leaf(root->left,v);
        leaf(root->right,v);
    }
}

vector<int>Max_Min(Node* root)
{
    vector<int>v;
    leaf(root,v);
    cout<<*max_element(v.begin(),v.end())<<" "<<*min_element(v.begin(),v.end());
    return v;
}


int main()
{
    Node* root=input();
    Max_Min(root);

    return 0;
}