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

int max(Node *head){
    int max1 = 0;
    Node *temp = head;
    
    while(temp != NULL){
        if(temp->data > max1){
            max1 = temp->data;
        }
        temp = temp->next;
    }
    return max1;
}
int min(Node *head){
    int min = INT_MAX;
    Node *temp = head;
    while(temp != NULL){
        if(temp->data < min){
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(1){
        int n;
        cin>>n;
        if(n == -1)  break;
        else insert(head,tail,n);
    }
    Node *temmp = head;
    Node *temp = head;
    int result1 = min(temmp);
    int result = max(temp);
    cout<<result<<endl;
    cout<<result1;

 
  return 0;
}