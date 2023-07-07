#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() != c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    int n;
    cin>>n;
    
    while (n--) {
        string s;
        cin>>s;
        if(check(s)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}






