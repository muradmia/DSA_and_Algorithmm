// CPP program to illustrate the
// list::front() function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Creating a list
    list<int> demoList;
 
    // Add elements to the List
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
 
    // get the first element using front()
    auto ele = (demoList.front(),1);
 
    // Print the first element
    cout << ele;
 
    return 0;
}