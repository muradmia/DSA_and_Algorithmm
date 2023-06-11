#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){

    node a(10);
    node b(20);

    a.next = &b;
    b.next = NULL;
    cout<<a.next->data << endl;
    
  return 0;
}