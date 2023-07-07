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
class my_stack{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;

    void push(int data){
        size++;
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
        size--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        delete deleteNode;
    }

    int top(){
        return tail->data;
    }

    int sie(){
        return size;
    }

    bool empty(){
        if(sie() == 0){
            return true;
        }else{
            return false;
        }
    }
};
class my_queue{
    public:
        Node *head2 = NULL;
        Node *tail2 = NULL;
        int sz2 = 0;

        void push(int data){
            sz2++;
            Node *newNode = new Node(data);
            if(head2 == NULL){
                head2 = newNode;
                tail2 = newNode;
                return;
            }
            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = tail2->next;
        }
        void pop(){
            sz2--;
            Node *del = head2;
            head2= head2->next;
            if(head2 == NULL){
                tail2 = NULL;
                delete del;
                return;
            }
            head2->prev = NULL;
            delete del;
        }
        int front(){
            return head2->data;
        }
        int size(){
            return sz2;
        }

        bool empty(){
            if(size() == 0) return true;
            else return false;
        }
};
int main(){
    my_queue q;
    //cout<<endl;
    int m;
    cin>>m;
    int n;
    cin>>n;
    while(m--){
        int dat;
        cin>>dat;
        q.push(dat);
    }
    my_stack st;
    while(n--){
        int data;
        cin>>data;
        st.push(data);
    }

    

    int flag = 0;

    while(!st.empty() && !q.empty()){
        if(st.sie() > q.size()){
            flag = 1;
            break;
        }else if(st.sie() < q.size()){
            flag = 1;
            break;
        }else if(st.sie() == q.size()){
                if(st.top() != q.front()){
                    flag = 1;
                    break;
                }
        }
        st.pop();
        q.pop();
    }
    
    

    if(flag == 1){
        cout<<"NO"<<" ";
    }else{
        cout<<"YES";
    }
 
  return 0;
}