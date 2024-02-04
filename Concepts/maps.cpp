#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "abc"; // O(logn)
    m[5] = "cdc";
    m[3] = "efg";
    m.insert({2, "bcd"});

    ///// map funtions -- find(), erase(), clear(), empty(), size();

    auto it = m.find(5); // O(logn)
    // if(it != m.end()){cout << "Found, " << it->first << " " << it->second << endl;
    // }
    // else{cout << "Not Found" << endl;
    // }

    m.erase(it); // O(logn)
    // m.erase(3); 
    for(auto &i: m){
        cout << i.first << " " << i.second << endl;
    }


    // unordered_map<int, string> m;
    // m[1] = "abc"; // O(1)
}