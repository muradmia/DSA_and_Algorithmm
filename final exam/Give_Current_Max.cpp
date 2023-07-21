#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }else if(a.marks == b.marks){
            return a.roll >b.roll;
        }else{
            return false;
        }
    }
};

void result(priority_queue<Student, vector<Student>,cmp>&p){
    int cmd;
    cin>>cmd;
    if(cmd == 0){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student a(name,roll,marks);
        p.push(a);
        cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().marks<<endl;
    }else if(cmd == 1){
        if(!p.empty()){
            cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().marks<<endl;
        }else{
            cout<<"Empty\n";
        }
    }else if(cmd == 2){
        if(!p.empty()){
            p.pop();
            if(!p.empty()){
                cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().marks<<endl;
            }else{
                cout<<"Empty\n";
            }
        }else{
            cout<<"Empty\n";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        result(pq);
    }

    return 0;
}