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

int *head1(Node *head,int data){
    //if(head == NULL) return head;
    Node *newNode = new Node(data);
    Node *temp = head;
    if(head == NULL){
        newNode = head;
    }
    if()
    head1(head->next,data);
}
int main(){

 
  return 0;
}