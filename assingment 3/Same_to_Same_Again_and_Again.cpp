#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    stack<int>st;

    int n,m;
    cin>>n>>m;

    while(n--){
        int data;
        cin>>data;
        q.push(data);
    }
    while(m--){
        int data;
        cin>>data;
        st.push(data);
    }

    int flag = 0;

    while(!st.empty() && !q.empty()){
        if(st.size() > q.size()){
            flag = 1;
            break;
        }else if(st.size() < q.size()){
            flag = 1;
            break;
        }else if(st.size() == q.size()){
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