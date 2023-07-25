#include <bits/stdc++.h>
using namespace std;

template<typename T>

class node{
    public:
        T val;
        node *next;

        node(T data){
            val = data;
            next = NULL;
        }
}