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

int dup(Node *head){
    Node *temp = head;
    int flag = 0;
    while(temp->next != NULL){
        Node *ptr = temp->next;
        while(ptr->next != NULL){
            if(temp->data == ptr->data){
                flag = 1;
                break;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
    return flag;
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

    int result = dup(head);
    cout<<result<<endl;
    if(result == 0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
 
  return 0;
}