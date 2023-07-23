#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int roll;
        int mark;
    student(string name, int roll, int mark){
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp{
    public:
    bool operator()(student a, student b){
        if(a.mark > b.mark) return true;
        else return false;
    }
};
int main(){

    int n;
    cin>>n;
    priority_queue<student,vector<student>,cmp>pq;
    for(int i=0; i<n; i++){
        string name;
        int roll, mark;
        cin>>name>>roll>>mark;
        student s(name, roll, mark);
        pq.push(s);
    }
 
    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark;
        pq.pop();
        cout<<endl;
    }
  return 0;
}