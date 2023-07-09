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

class my_quee{
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
            tail = tail->next;
        }

        void pop(){
            sz--;
            Node *del = head;
            head = head->next;
            delete del;
            if(head == NULL){
                tail = NULL;
            }
        }

        int top(){
            return head->data;
        }
        int size(){
            return sz;
        }
        bool empt(){
            if(size() == 0) return true;
            else return false;
        }


};
int main(){

    my_quee q;
    q.push(10);
    q.push(20);
    q.push(30);
    //q.pop();
    //cout<<q.top();
    
    while(!q.empt()){
        cout<<q.top()<<" ";
        q.pop();
    }

 
  return 0;
}