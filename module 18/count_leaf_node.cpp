#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
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
}

int count(Node *root){
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->left);
    return l+r+1;
}
int count_leaf(Node *root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL){
        return 1;
    }else{
        int l = count(root->left);
        int r = count(root->left);
        return l+r;
    }
}
int main() {
    // code
    Node *root = input();
    int c = count_leaf(root);
    cout<<c<<" ";


    return 0;
}
