#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>mylist(10,5);
    cout<<mylist.size()<<" ";

    for(auto i = mylist.begin(); i != mylist.end();i++){
        cout<<*i<<" ";
    }
 
  return 0;
}