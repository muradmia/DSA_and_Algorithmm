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

void print(Node *v){
    if(v== NULL) return;
    cout<<v->data<<" ";
    print(v->next);
}
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
    Node *temp = head;

    while(temp != NULL){
        Node *temp1 = temp->next;
        while (temp1 != NULL)
        {
            if(temp->data > temp1->data){
                swap(temp->data,temp1->data);
            }
            temp1 = temp1->next;
        }
        temp = temp->next;
    }
}

void middle(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    Node *t = head;
    for(int i = 1;i <= count/2-1;i++){
        t = t->next;
    }

    if(count % 2 == 0){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        cout<<t->next->data<<" ";
        cout<<t->data;
    }else if(count == 1){
        cout<<t->data;
    }else{
        cout<<t->next->data;
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(1){
        int n;
        cin>>n;
        if(n == -1) break;
        else insert(head,tail,n);
    }

    cout<<tail->data<<" ";

    sort(head);
    middle(head);
    cout<<endl;

    //print(head);

 
  return 0;
}