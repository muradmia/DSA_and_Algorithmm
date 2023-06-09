#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    while (n--)
    {
        int y,flag = 0;
        cin>>y;
        int arr[y];
        for(int i=0; i<y; i++){
            cin>>arr[i];
        }

        for(int i=0; i<y; i++){
            for(int j=i+1; j<y;j++){
                if(arr[i] > arr[j]){
                    flag = 1;
                break;
                }
            }
        }

        //cout<<flag<<endl;
        if(flag == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        flag = 0;
    }
 
  return 0;
}