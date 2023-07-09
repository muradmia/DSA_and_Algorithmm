#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<int>l;
    l.push(10);
    l.push(20);
    l.push(30);

    while (!l.empty())
    {
        cout<<l.front()<<" ";
        l.pop();
    }

 
  return 0;
}