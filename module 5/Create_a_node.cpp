#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){

    node a,b;
    a.data = 10;
    b.data = 20;
    a.next = &b;
    b.next = NULL;

    cout<<a.next->data<<" ";
  return 0;
}