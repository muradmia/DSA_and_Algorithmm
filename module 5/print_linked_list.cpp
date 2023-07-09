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

void print(Node *head){
    while(head != NULL){
        cout<<" "<<head->data;
        head = head->next;
    }
}
int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
 

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print(head);

     

  return 0;
}