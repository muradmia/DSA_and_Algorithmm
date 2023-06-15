#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node *v){
    if(v == NULL) return;
    
    reverse(v->next);
    cout<<v->data<<" ";
}

void print(Node *v){
    if(v == NULL) return;
    cout<<v->data<<" ";
    print(v->next);
}
void insert(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(1){
        int n;
        cin >> n;
        if(n == -1) break;
        else insert(head,tail,n);
    }

    reverse(head);
    cout<<endl;
    print(head);

 
  return 0;
}