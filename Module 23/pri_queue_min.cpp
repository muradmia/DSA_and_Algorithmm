#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int,vector<int>,greater<int>>pq;

    while(true){
        int n;
        cin>>n;
        if(n==1){
            int data;
            cin>>data;
            pq.push(data);
        }else if(n==2){
            pq.pop();
        }else if(n==3){
            cout<<pq.top()<<" ";
        }else if(n==4){
            break;
        }
    }
 
  return 0;
}