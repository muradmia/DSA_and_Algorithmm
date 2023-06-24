#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
       // this->prev = NULL;
    }
};

void insert(Node *&head, Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void sort(Node *&head){
    Node *temp1 = head;
    while(temp1->next != NULL){
        Node *temp2 = temp1->next;
        while(temp2 != NULL){
            if(temp1->data > temp2->data){
                swap(temp1->data,temp2->data);
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}
void remove(Node *&head){
    Node *temp = head;
    Node *dem = NULL;
    if(head == NULL){
        return;
    }
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            dem = temp->next->next;
            //temp->next = temp->next->next;
            //Node *del = temp->next;
            delete temp->next;
            //cout<<temp->data;
            temp->next = dem;
        }else{
            temp = temp->next;
        }
        
    }
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

    sort(head);
    //print(head);
    remove(head);
    print(head);
 
  return 0;
}