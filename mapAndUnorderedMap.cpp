#include<bits/stdc++.h>
using namespace std;

// map uses red black tree
// store unique key 
// store key value pair
// store key in lexicographic order


// unordered map uses hashing  

int main(){
    unordered_map<string, int> m;
    map<int, int> mm;

    mm.lower_bound(20); // returns the lower bound i.e closest smaller value

    m.insert(make_pair("gfg", 20));
    m.insert(make_pair("course", 30));
    m.insert(make_pair("best", 60));

    // for(auto x : m){
    //     cout << x.first << " " << x.second << endl;
    // }

    // find - search
    // if(m.find("course") != m.end()){
    //     cout << "Found" << endl;
    // }else{
    //     cout << "Not found" << endl;
    // }

    // cout << m.at("gfg");

    // remove - erase
    m.erase("best");

    return 0;
}