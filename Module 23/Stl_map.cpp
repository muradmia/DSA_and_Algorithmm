#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string,int>m;

    /*m.insert({"Murad",20});
    m.insert({"tanvir",30});
    m.insert({"Parvej",40});*/
   

    m["Murad"] = 20;
    m["tanvir"] = 30;
    m["Parvej"] = 40;

   

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<m.count("Murad")<<endl;
  return 0;
}