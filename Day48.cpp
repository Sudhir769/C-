#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack{
    Node *head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity = c;
        currSize = 0;
        head = NULL;
    }
    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this->currSize == this->capacity;
    }
    void push(int data){
        if(this->currSize==this->capacity){
            cout << "Overflow\n";
            return;
        }
        Node *new_node = new Node(data);
        new_node->next = this->head;
        head = new_node;
        currSize++;
    }
    int pop(){
        if(this->head==NULL){
            return INT_MIN;
        }
        Node *new_head = head;
        head = head->next;
        int res = new_head->data;
        free(new_head);
        currSize--;
        return res;
    }
    int size(){
        return this->currSize +1;
    }
    int getTop(){
        if(this->head==NULL){
            cout << "UnderFlow\n";
            return INT_MIN;
        }
        return head->data;
    }
};

int main(){

    // Stack st(5);
    // st.push(82);
    // st.push(32);
    // st.push(27);
    // st.push(67);
    // cout << st.getTop() << endl;
    // st.push(74);
    // cout << st.getTop() << endl;
    // st.push(44);
    // st.pop();
    // cout << st.size() << endl;
    // cout << st.getTop() << endl;
    // st.pop();
    // cout << st.getTop() << endl;

    // STL Stack
    stack<int> s;
    s.push(82);
    s.push(32);
    s.push(27);
    s.push(67);
    cout << s.top() << endl;
    s.push(74);
    cout << s.top() << endl;
    s.push(44);
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
// 67
// 74
// 5
// 74
// 67

}