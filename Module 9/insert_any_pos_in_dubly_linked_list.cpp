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

void insert(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prv = tail;
    tail = newNode;
}
void insert_at_anypos(Node *&head,int pos,int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    for(int i = 1; i <= pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prv = newNode;
    newNode->prv = temp;
}
void insert_head(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prv = newNode;
    head = newNode;
}

void delete_any_pos(Node *&head,int pos){
    Node *temp = head;
    for(int i = 1;i <= pos-1;i++){
        temp= temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    temp->next->prv = temp;
    delete del;
}
void delete_tail(Node*&tail){
    Node *del = tail;
    tail = tail->prv;
    tail->next = NULL;
    delete del;
}
void print(Node *head){
    if(head == NULL) return;
    cout<<head->data<<" ";
    print(head->next);
}
void reverse(Node *tail){
    if(tail == NULL) return;
    cout<<tail->data<<" ";
    reverse(tail->prv);
}

void delte_head(Node *&head){
    Node *del = head;
    head = head->next;
    head->prv = NULL;
    delete del;
}
int main(){

    Node *head = NULL;
    Node *tail = NULL;
    

    while(1){
        int n;
        cin>>n;
        if(n == 0){
            int data;
            cin>>data;
            insert(head,tail,data);
        }
        else if(n == -1) break;
    }

    //insert_at_anypos(head,2,100);
    //insert_head(head,tail,100);
    //delete_any_pos(head,2);
    //delete_tail(tail);
    //delte_head(head);
    //reverse(tail);
    //cout<<endl;
    print(head);
  return 0;
}