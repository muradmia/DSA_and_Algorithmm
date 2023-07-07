#include<bits/stdc++.h>
using namespace std;

char mix(char c1, char c2) {
    if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R')) {
        return 'P';
    } else if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R')) {
        return 'Y';
    } else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B')) {
        return 'C';
    }
    return c1;
}

string color(string colors) {
    stack<char> s;
    for (char c : colors) {
        if(!s.empty() && s.top() == c){
            s.pop();
        }else if (!s.empty() && mix(s.top(), c) != s.top()) {
            char mixed = mix(s.top(), c);
            s.pop();
            if (!s.empty() && s.top() == mixed) {
                s.pop();
            } else {
                //s.pop();
                s.push(mixed);
            }
        }else{
            s.push(c);
        }
    }
    string result;
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }
    return result;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string c;
        cin>>c;
        cout<<color(c) << endl;
    }
    return 0;
}
