#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    queue<string>q;
    while(n--){
        int t;
        cin>>t;
        if(t == 0){
            string s;
            cin>>s;
            q.push(s);
        }else if(t == 1){
            if(!q.empty()){
                cout<<q.front()<<"\n";
                q.pop();
            }else{
                cout<<"Invalid\n";
            }
        }
    }
 
  return 0;
}