#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int> pq;

    cout<<"Enter your command : ";
   

    while(1){
        int c;
        cin>>c;
        if(c == 0){
        int data;
        cin>>data;
        pq.push(data);
        }else if(c == 1){
            if(!pq.empty()){
                pq.pop();
            }else{
                cout<<"Empty";
            }
        }else if(c == 2){
            cout<<pq.top()<<" ";
        }else if (c == 3){
            break;
        }
    }
    
  return 0;
}