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

void insert_at_tail(Node *&head,int data){
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
void insert(Node *head,int pos,int data){
    Node *newNode = new Node(data);
    Node *temp = head;

    for(int i=1;i<= pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void head1(Node *&head,int data){
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    
    Node *head = NULL;
    while(true){
        int n;
        cin>>n;
        if(n == 1){
            int data;
            cout<<"Enter data :";
            cin>>data;
            insert_at_tail(head,data);
        }else if(n == 2){
            int data,pos;
            cout<<"Enter Positon :";
            cin>>pos;
            cout<<"Enter your data :";
            cin>>data;
            insert(head,pos,data);
        }else if(n == 3){
            print(head);
        }else if(n == 4){
            int data;
            cout<<"Enter data :";
            cin>>data;
            head1(head,data);
        }else if(n == 5){
            break;
        }
    }

 
  return 0;
}