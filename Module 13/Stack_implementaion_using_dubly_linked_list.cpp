#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prev;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class my_stack{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

    void push(int data){
        sz++;
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop(){
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        delete deleteNode;
    }

    int top(){
        return tail->data;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(size() == 0){
            return true;
        }else{
            return false;
        }
    }
};
int main(){

    my_stack st,st2;
    int n,m;
    cin>>n;
    for(int i = 0;i < n;i++){
        int data;
        cin>>data;
        st.push(data);
    }
    cin>>m;
    for(int i = 0;i < m;i++){
        int data;
        cin>>data;
        st2.push(data);
    }
    
    int flag = 0;
    while(!st.empty() && !st2.empty()){
        if(st.size() > st2.size()){
            flag = 1;
            break;
        }else if(st.size() < st2.size()){
            flag = 1;
            break;
        }else if(st.size() == st2.size()){
            if(st.top() != st2.top()){
                flag = 1;
                break;
            }
        }
        st.pop();
        st2.pop();
    }

    cout<<flag;
 
  return 0;
}