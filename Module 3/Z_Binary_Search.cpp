#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,q;
    cin>>n>>q;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<q;i++){
        int x,flag = 0;
        cin>>x;

        for(int j=0;j<n;j++){
            if(arr[j] == x){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"not found\n";
        }else{
            cout<<"found\n";
        }
    }


 
  return 0;
}