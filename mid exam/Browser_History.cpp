#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<string>l;
    string data;
    while(1)
    {
        cin>>data;
        if(data=="end") break;
        else
        {
            l.push_back(data);
        }
    }
    int test;
    cin>>test;
    auto cur=l.begin();
    while(test--)
    {
        string address;
        cin>>address;
        bool flag=false;
        
        if(address=="visit"){
            cin>>data;
        
        for(auto it=l.begin(); it != l.end();it++)
        {
            if(*it==data)
            {
                cur=it;
                flag=true;
                break;
            }
        }
            if(flag==true)
            {
                cout<<*cur<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(address=="next")
        {
            cur++;
            if(cur !=l.end())
            {
                cout<<*cur<<endl;    
            }
            else
            {
                cur--;
                cout<<"Not Available"<<endl;
                
            }
        }
        else if(address=="prev")
        {
            if(cur ==l.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cur--;
                cout<<*cur<<endl;
            }
        }

    }
    return 0;
}