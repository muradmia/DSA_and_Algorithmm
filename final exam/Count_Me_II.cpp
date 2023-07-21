#include<bits/stdc++.h>
using namespace std;
void feq(vector<int>&v){
    map<int, int>it;
    for(int num : v){
        it[num]++;
    }
    int max = 0;
    int val = 0;
    for(auto pair : it){
        if(pair.second > max){
            max = pair.second;
            val = pair.first;
        }else if(pair.first > val && pair.second == max){
            val = pair.first;
        }
    }
    cout<< val<<" ";
    cout <<max<<endl;
}
int main(){

    int t;
    cin>>t;

    while(t--){
        int size;
        cin>>size;
        vector<int>v(size);
        for(int i=0; i<size; i++){
            cin>>v[i];
        }
        feq(v);
    }
    
 
  return 0;
}