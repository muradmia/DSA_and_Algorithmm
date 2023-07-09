#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>l;
    l.push(10);
    l.push(20);
    l.push(30);
    l.push(40);

    while(!l.empty()){
        cout<<l.top()<<" ";
        l.pop();
    }
 
  return 0;
}