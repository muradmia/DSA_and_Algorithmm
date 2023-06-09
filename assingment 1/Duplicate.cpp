#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int flag = 0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                flag = 1;
            break;
            }
        }
    }

    //cout<<flag<<" ";
    if(flag == 0){
        cout<<"NO";
    }else if(flag == 1){
        cout<<"YES";
    }

    
  return 0;
}