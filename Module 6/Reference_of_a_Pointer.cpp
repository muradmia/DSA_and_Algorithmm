#include<bits/stdc++.h>
using namespace std;
void fun(int *p){
    cout<<p<<endl;
}
int main(){

    int n = 10;
    int *ptr = &n;
    fun(ptr);
    cout<<&ptr<<endl;

  return 0;
}