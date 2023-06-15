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

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int count(Node *head){
    int cou = 0;
    Node *temp = head;
    while(temp != NULL){
        cou++;
        temp = temp->next;
    }
    return cou;
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
    Node *tail = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while(1){
        int n;
        cin>>n;
        if(n == -1) break;
        else insert(head,tail,n);
    }
    while(1){
        int n;
        cin>>n;
        if(n == -1) break;
        else insert(head2,tail2,n);
    }
    
    int l1 = count(head);
    int l2 = count(head2);

    if(l1 == l2){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    print(head);
    cout<<endl;
    print(head2);
  return 0;
}