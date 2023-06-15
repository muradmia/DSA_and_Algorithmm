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
    Node *temp = head;
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int print_max(Node *head){
    int max = 0;
    Node *temp = head;
    //Node *ptr = temp->next;

    while(temp != NULL){
        if(temp->data > max){
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
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
    int max = print_max(head);
    cout<<max<<" ";
 
  return 0;
}