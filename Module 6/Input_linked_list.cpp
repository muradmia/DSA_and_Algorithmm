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
void insert(Node *&head,int data){
    Node *newNode = new Node(data);
    Node *temp = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){

        if(temp->next == NULL){
            cout<<temp->data<<"->NULL";
        }else{
            cout<<temp->data<<"->";
        }
        
        temp = temp->next;
    }
}
int main(){

    Node *head = NULL;
    while(1){
        int n;
        cin>>n;
        if(n == -1) break;
        else{
            insert(head,n);
        }
    }
    print(head);
 
  return 0;
}