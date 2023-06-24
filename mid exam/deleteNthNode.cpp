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
void delet(Node *&head){
    Node *temp = head;
    Node *dem = NULL;
    while(temp->next->next != NULL){
        dem = temp;
        temp = temp->next;
    }
    dem->next = dem->next->next;
    delete dem->next;
    cout<<dem->data<<"\n";
}

void delet_1(Node *&head,int pos){
    Node *temp = head;
    if(head == NULL) return;
    if(pos == 0){
        head = NULL;
        delete head;
        return;
    }
    for(int i = 1;i <= pos;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete temp->next;
}
void print(Node *head){
    if(head == NULL) return;
    cout<<head->data<<" ";

    print(head->next);
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
    delet_1(head,0);
    print(head);
 
  return 0;
}