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
int count(Node *&head){
    int count1 = 0;
    while(head != NULL){
        count1++;
        head = head->next;
    }
    return count1;
}
int check(Node *head1,Node *head2){
    int flag = 0;
    Node *t = head1;
    Node *m = head2;
    int result = count(t);
    int result1 = count(m);

    //if(head2 != NULL)int result1 = count(head2);
    //cout<<result<<endl;
    //cout<<result2<<endl;
    
    if(result == result1){
        
    }
    return flag;
}
int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while(1){
        int n;
        cin >> n;
        if(n == -1) break;
        else insert(head1,tail1,n);
    }

    while(1){
        int n;
        cin >> n;
        if(n == -1) break;
        else insert(head2,tail2,n);
    }

    int result = check(head1,head2);
    //cout<<result<<endl;
    if(result == 1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
 
  return 0;
}