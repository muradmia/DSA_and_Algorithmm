#include <bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        q.push(data);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0){
            int data;
            cin >> data;
            q.push(data);
            cout << q.top() << endl;
        }
        else if (cmd == 1){
            if (!q.empty()){
                cout << q.top() << endl;
            }
            else{
                cout << "Empty" << endl;
            }
        }else if (cmd == 2){
            if (!q.empty()){
                    q.pop();
                    if (!q.empty())
                    {
                        cout << q.top() << endl;
                    }
                    else
                    {
                        cout<< "Empty"<<endl;
                    }
                }
            else{
                cout <<"Empty"<<endl;
            }
        }
    }
    return 0;
}