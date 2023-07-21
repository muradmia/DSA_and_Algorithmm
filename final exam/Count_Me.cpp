#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        map<string, int> mp;
        string word;
        int count = 0;
        while (ss >> str)
        {
            mp[str]++;
            if (mp[str] > count)
            {
                word = str;
                count = mp[str];
            }
        }
        cout<<word<<" "<<count<<endl;
    }
    return 0;
}