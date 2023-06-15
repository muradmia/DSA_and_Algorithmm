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
void middle(Node *head){
    int count = 0;

    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    //cout<<count<<endl;
    Node *tm = head;
    for(int i = 0; i < count/2-1; i++){
        tm = tm->next;
    }
         if(count % 2 == 0){
            cout<<tm->data<<" ";
            cout<<tm->next->data<<endl;
        }else{
            cout<<tm->data;
        }
}
int main(){

    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {   
        int n;
        cin>>n;
        if(n == -1) break;
        else insert(head,tail,n);
    }

    middle(head);
 
  return 0;
}