// #include <bits/stdc++.h>
#include<unordered_map>
#include<map>
#include <iostream>
using namespace std;

// Hashing

int main(){
    // creation
    unordered_map<string, int> m;

    // insertion 1
    pair<string, int> p = make_pair("Sudhir", 22);
    m.insert(p);

    // insertion 2
    pair<string, int> p2("Sophia", 23);
    m.insert(p2);

    // insertion 3
    m["Sheetal"] = 25;
    m["Isha"] = 24;

    // Accessing elements
    cout << m["Sudhir"] << endl;
    cout << m.at("Sophia") << endl;
    cout << m["Unknown"] << endl;
    cout << m.at("Unknown") << endl;

    // functions
    cout << m.size()<< endl;
    cout << m.count("Salaman")<< endl;

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // iterator
    unordered_map<string, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
    cout << endl;


}