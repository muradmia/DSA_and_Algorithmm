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

Node *convert(int arr[],int n,int l,int r){
    
    if(l>r) return NULL;

    int mid = (l + r) /2;
    Node *root = new Node(arr[mid]);

    Node *leftr = convert(arr,n,l,mid-1);
    Node *rightr = convert(arr,n,mid+1,r);
    root->left = leftr;
    root->right = rightr;
    return root;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Node *root = convert(arr,n,0,n-1);
    level_order(root);
 
  return 0;
}