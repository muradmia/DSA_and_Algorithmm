#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
      int data;
      Node* next; 
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_head(Node* &head,Node* &tail,int val)
{
    
    
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void print(Node* head,Node* tail)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        tmp=tmp->next;
    }
    cout<<head->data<<" "<<tail->data;
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            
            insert_head(head,tail,val);
        }
        else if(pos==1){
            insert_tail(head,tail,val);
        }

        cout<<head->data<<" "<<tail->data<<endl;

    }
    
    return 0;
}