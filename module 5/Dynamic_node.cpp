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
int main(){

   // Node head(10);
   Node *head = new Node(10);
   Node *a = new Node(20);

    head->next = a;

    cout<<head->next->data<<" ";

    
  return 0;
}