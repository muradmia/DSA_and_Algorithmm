#include<bits/stdc++.h>
using namespace std;
int main(){

    string name;
    getline(cin, name);
    stringstream ss(name);
    map<string, int>m;

    string word;
    int count = 0;

    while(ss >>word){
        m[word]++;
    }

    for(auto it = m.begin(); it != m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

  return 0;
}