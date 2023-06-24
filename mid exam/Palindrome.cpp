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

void insert(Node *&head, Node *&tail, int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

 void reverse(Node *&head,Node *cur){
        if(cur->next == NULL){
            head = cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
int check(Node*& head) {
        int flag = 0;
        //if(head == NULL) return head;
        Node *newhead = NULL;
        Node *newtail = NULL;
        Node *temp = head;

        while(temp != NULL){
            insert(newhead,newtail,temp->data);
            temp = temp->next;
        }
        reverse(newhead,newhead);
        temp = head;
        Node *temp2 = newhead;

        while(temp != NULL){
            if(temp->data != temp2->data){
                flag = 1;
                return flag;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return flag;
    }
int main(){

    Node *head1 = NULL;
    Node *head = NULL;
    Node *tail1 = NULL;
    Node *tail = NULL;

    while (1)
    {
        int data;
        cin>>data;
        if(data == -1) break;
        else insert(head,tail,data);
    }

    int result = check(head);
   // cout<<result<<endl;

    if(result == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO";
    }


 
  return 0;
}