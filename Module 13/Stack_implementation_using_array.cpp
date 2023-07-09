#include<bits/stdc++.h>
using namespace std;
class my_stack{
    public:
        vector<int>v;

        void push(int data){
            v.push_back(data);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }
        bool empty(){
            if(v.size()==0){
                return true;
            }else{
                return false;
            }
        }

        int size(){
            return v.size();
        }
};
int main(){
    my_stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    while(st.empty() == false){
        cout<<st.top()<<endl;
        st.pop();
    }

 
  return 0;
}