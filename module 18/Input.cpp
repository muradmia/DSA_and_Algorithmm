#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}

Node *input_tree(){
    int val;
    cin>>val;
    Node *root;
    if(val == -1){
         root = NULL;
    }else{
        root = new Node(val);
    }


    queue<Node*>q;
    //Node *p = q.front();
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *p = q.front();
        q.pop();

        int l,r;
        cin>>l;
        cin>>r;
        Node *myleft;
        Node *myright;

        if(l == -1){
            myleft = NULL;
        }else{
            myleft = new Node(l);
        }

        if(r == -1){
            myright = NULL;
        }else{
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
int main(){

 
  return 0;
}