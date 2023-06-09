#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,count = 0,i,j;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(i=0; i<n; i++){
        for(j = i+1; j<=n; j++){
            //cout<<v[i]+1;
            if(v[i] + 1 == v[j]){
                count++;
            }else{
                count = count;
            }
        }
    }

    cout<<count;
    

  return 0;
}