#include <bits/stdc++.h>
using namespace std;

//c++ standard template library
void Array(){
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    cout << "size: " << size << endl;

    for(int ele : a){
        cout << ele << " ";
    }
    cout << endl;

    cout << "Element at 2nd index :" << a.at(2) << endl;
    cout << "Empty or not :" << a.empty() << endl;
    cout << "First Element :" << a.front() << endl;
    cout << "Last Element :" << a.back() << endl;
}
// vectors
void Vector(){
    vector<int> a(5, 1);
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    v.push_back(6);

    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;

    cout << "size of vector :" << v.size() << endl;
    cout << "empty or not :" << v.empty() << endl;
    cout << "capacity :" << v.capacity() << endl;
    cout << "First Element :" << v.front() << endl;
    cout << "Last Element :" << v.back() << endl;
    v.clear();
}
void Deque(){
    deque<int> a(5, 1);
    deque<int> v = {1, 2, 3, 4, 5};
    v.pop_front();
    v.pop_back();
    v.push_back(6);

    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;

    cout << "First Element :" << v.front() << endl;
    cout << "Last Element :" << v.back() << endl;
    cout << "Empty or not :" << v.empty() << endl;
    cout << "size of vector :" << v.size() << endl;
    cout << "max size :" << v.max_size() << endl;
    v.erase(v.begin(), v.begin() + 2);
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;
}
void List(){
    list<int> a(5, 1);
    list<int> v = {1, 2, 3, 4, 5};
    list<int> n(v);
    list<int> l;

    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for(int ele : l){
        cout << ele << " ";
    }
    cout << endl;
    // l.erase(l.begin(), l.end());
    for(int ele : n){
        cout << ele << " ";
    }
    cout << endl;

    l.pop_front();
    l.pop_back();
    for(int ele : l){
        cout << ele << " ";
    }
    cout << endl;

    cout << "Size of list :" << l.size() << endl;
    cout << "Max size of list :" << l.max_size()<<endl;
    cout << "Empty or not :" << l.empty()<<endl;
    cout << "Front element :" << l.front()<<endl;
    cout << "Back element :" << l.back()<<endl;
}
void Stack(){
    stack<int> a;
    stack<string> s;
    s.push("Sudhir");
    s.push("Maurya");

    s.pop();
    cout << s.top() << endl;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    cout << a.top();
}

int main(){
    // Array();
    // Vector();
    // Deque();
    // List();
    Stack();

}