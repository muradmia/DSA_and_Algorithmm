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

class my_queue{
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
            Node *del = head;
            head = head->next;
            if(head == NULL){
                tail = NULL;
                delete del;
                return;
            }
            head->prev = NULL;
            delete del;
        }
        int front(){
            return head->data;
        }
        int size(){
            return sz;
        }

        bool empty(){
            if(size() == 0) return true;
            else return false;
        }
};
int main(){
    my_queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    //q.pop();
    cout<<q.front();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

 
  return 0;
}