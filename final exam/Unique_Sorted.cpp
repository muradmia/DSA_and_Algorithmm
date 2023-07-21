#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            int data;
            cin>>data;
            l.push_back(data);
        }
        l.sort();
        l.unique();
        l.reverse();
        while(!l.empty()){
            cout<<l.front()<<" ";
            l.pop_front();
        }
        cout<<endl;
    }
    
  return 0;
}