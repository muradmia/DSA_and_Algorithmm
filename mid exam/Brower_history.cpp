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

void insert(Node *&head,Node *&tail,int data){
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
int main(){

    list<string>v;
    //list<string>v1;
    while(1){
        string s;
        cin>>s;
        if(s == "end")break;
        else v.push_back(s);
    }

    for(auto i = v.begin(); i != v.end();i++){
        cout<<*i<<" ";
    }
    int test;
    cin>>test;
    cin.ignore();
    for(int i=0;i<test;i++){
        string s;
        cin>>s;
        if(s == "visit"){
            string te;
            cin>>te;
            auto it = find(v.begin(),v.end(),te);
            if(it != v.end()){
                //v = v.begin();
                cout<<*it<<" "<<endl;
            }else{
                cout<<"Not found";
            }
            //cout<<*it<<endl;
        }else if(s == "next"){
            cout<<*v++;
        }
        
    }
    cout<<*v.begin()<<endl;
    

 
  return 0;
}