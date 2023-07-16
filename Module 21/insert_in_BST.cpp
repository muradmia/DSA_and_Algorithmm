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
};
Node* input() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* mleft;
        Node* mright;

        if (l == -1)
            mleft = NULL;
        else
            mleft = new Node(l);
        if (r == -1)
            mright = NULL;
        else
            mright = new Node(r);

        f->left = mleft;
        f->right = mright;

        if (f->left) {
            q.push(f->left);
        }
        if (f->right) {
            q.push(f->right);
        }
    }
    return root;
};

void insert(Node *&root,int x){

    if(root == NULL){
        root = new Node(x);
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }else{
            insert(root->left,x);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(x);
        }else{
            insert(root->right,x);
        }
    }
}
void level_order(Node *root){
    if(root == NULL){
        cout<<"Tree NULL";
        return;
    }

    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();


        cout<<node->val<<" ";

        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        
    }
}
int main(){
    Node *root = input();
    insert(root,20);
    level_order(root);
 
  return 0;
}