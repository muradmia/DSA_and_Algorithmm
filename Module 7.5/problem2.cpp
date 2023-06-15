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
void insert(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    Node *temp = head;

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode; 
}
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){

    Node *head = NULL;
    Node *tail = NULL;
    while(1){
        int data;
        cin>>data;
        if(data == -1) break;
        else insert(head,tail,data);
    }
    //print(head);
    reverse(head);
 
  return 0;
}