#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n+n);
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }

    //c.assign(a.begin(),a.end());
    c = b;
    c.insert(c.begin()+n,a.begin(),a.end());

    for(int i=0; i<n+n;i++){
        cout<<c[i]<<" ";
    }
   
    
    

  return 0;
}