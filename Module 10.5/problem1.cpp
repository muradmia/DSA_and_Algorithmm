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

int length(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    //cout<<count<<" ";
    return count;
}

int check(Node *&head1,Node *&head2){
    Node *temp1 = head1;
    Node *temp2 = head2;
    int flag = 0;
    int result1 = length(temp1);
    int result2 = length(temp2);
    //cout<<result1<<" "<<result2<<" ";

    while(head1 != NULL && head2 != NULL){
        if(result1 > result2){
            flag = 1;
            break;
        }else if(result1 < result2){
            flag = 1;
            break;
        }else if(result1 == result2){
            if(head1->data != head2->data){
                flag = 1;
                break;
            }
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return flag;
}

void print(Node *v){
    if(v==NULL) return;
    cout<<v->data<<" ";
    print(v->next);
}
int main(){

    Node *head1 = NULL, *head2 = NULL;
    Node *tail1 = NULL, *tail2 = NULL;

    while(1){
        int data;
        cin >> data;
        if(data == -1){
            break;
        }else{
            insert(head1,tail1,data);
        };
    }
    while(1){
        int data;
        cin >> data;
        if(data == -1){
            break;
        }else insert(head2,tail2,data);
    }
    //print(head1);
    int r = check(head1,head2);
    //cout<<r<<endl;

    if(r == 1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
 
  return 0;
}