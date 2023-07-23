#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int>s;
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        s.insert(data);
    }
 
    stack<int>st;
    for(auto it = s.begin(); it != s.end();it++){
        st.push(*(it));
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

  return 0;
}