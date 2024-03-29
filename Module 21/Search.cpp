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
}
bool search(Node* root,int x){
    if(root == NULL) return false;
    if(root->val == x){
        return true;
    }

    if(x > root->val){
        return search(root->left,x);
    }else{
        return search(root->right,x);
    } 
}
int main(){
    Node *root = input();
    if(search(root,12)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
  return 0;
}