#include<bits/stdc++.h>
using namespace std;
class my_queue{
    public:
        list<int>l;
        void push(int data){
           l.push_back(data);
        }
        void pop(){
            l.pop_front();
        }
        int size(){
            return l.size();
        }
        int front(){
            return l.front();
        }
        bool isEmpty(){
            return l.empty();
        }
};
int main(){

    my_queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    //q.pop();
    //cout<<q.front();
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }
 
  return 0;
}