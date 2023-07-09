#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(int i=0;i<q;i++){
        int x,flag = 0;
        cin>>x;
        int l = 0,r = n-1;
        while(l<=r){
            int middle = (l+r)/2;
            if(arr[middle] == x){
                flag = 1;
                break;
            }

            if(x > arr[middle]){
                l = middle + 1;
            }else{
                r = middle-1;
            }
        }

        if(flag == 0){
            cout<<"not found\n";
        }else
        {
            cout<<"found\n";
        }
    }

  return 0;
}