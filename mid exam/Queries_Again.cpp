#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prv;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prv = NULL;
    }
};
int size(Node *v){
    int count = 0;
    while(v != NULL){
        count++;
        v = v->next;
    }
    return count;
}

void insert(Node *&head, Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prv = tail;
    tail = tail->next; 

}
void insert_head(Node *&head, Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prv = newNode;
    head = newNode;
}
void insert_at_anypos(Node *&head,int pos,int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    for(int i = 1; i <= pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prv = newNode;
    newNode->prv = temp;
}
void print(Node *v){
    while (v != NULL) 
    {
        cout<<v->data<<" ";
        v = v->next;
    }
    cout<<endl;
}
void rev(Node *v){
    while (v != NULL) 
    {
        cout<<v->data<<" ";
        v = v->prv;
    }
    cout<<endl;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int test;
    cin>>test;

    while(test--){
        int pos,data;
        cin>>pos;
        cin>>data;
        if(pos == 0){
            insert_head(head,tail,data);
            cout<<"L -> ";
            print(head);
            cout<<"R -> ";
            rev(tail);
        }else if(pos == size(head)){
            insert(head,tail,data);
            cout<<"L -> ";
            print(head);
            cout<<"R -> ";
            rev(tail);
        }else if(pos < size(head)){
            insert_at_anypos(head,pos,data);
            cout<<"L -> ";
            print(head);
            cout<<"R -> ";
            rev(tail);
        }else if(pos >= size(head)){
            cout<<"Invalid\n";
        }
        
        //cout<<"L->";
        //print2(tail);
        //cout<<endl;
        //cout<<"R->";
        //print(head);

        
            //cout<<endl;
        //rev(tail);
            
        
       
            
        
        
        //cout<<endl;
        
    }
 
  return 0;
}