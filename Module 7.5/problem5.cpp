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

void sort(Node *&head){
    Node *temp = head;
   
    while(temp != NULL){
        Node *ptr = temp->next;
        while(ptr != NULL){
            if(temp->data > ptr->data){
                swap(temp->data,ptr->data);
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
}

void sort1(Node *&head){
    Node *temp = head;

    for(Node *i = temp;i->next != NULL;i = i->next){
        for(Node *j = i->next;j != NULL;j = j->next){
            if(i->data > j->data){
                swap(i->data,j->data);
            }
        }
    }
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
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
 
    sort(head);
    print(head);
  return 0;
}