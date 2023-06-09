#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,x;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int>v1(m);

    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    cin>>x;
    v.insert(v.begin()+x,v1.begin(),v1.end());

    for(int i=0;i<n+m;i++){
        cout<<v[i]<<" ";
    }

  return 0;
}