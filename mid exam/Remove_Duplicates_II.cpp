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

    list<int>v;
    //vector<int>unique;
    while (1)
    {
        int data;
        cin>>data;
        if(data == -1)break;
        else v.push_back(data);
    }
    v.sort();

    v.unique();
    for(int a : v){
        cout<<a<<" ";
    }
 
  return 0;
}