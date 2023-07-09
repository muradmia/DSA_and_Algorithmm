#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prv;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prv = NULL;
    }
};
void print(Node *v){
    if(v == NULL) return;
    cout<<v->data<<endl;
    print(v->next);
}
void reverse(Node *v){
    Node *tmp = v;
    while(tmp != NULL){
        cout<<tmp->data<<endl;
        tmp = tmp->prv;
    }
}


int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *c = new Node(30);
    Node *tail = c;

    head->next = a;
    a->prv = head;
    a->next = tail;
    tail->prv = a;
    reverse(tail);

    
 
  return 0;
}