#include <bits/stdc++.h>
using namespace std;

// Circular Queue
class Queue{
    int front;
    int back;
    vector<int> v;
    int cs;
    int ts;
public:
    Queue(int n){
        this->ts = n;
        this->cs = 0;
        this->front = 0;
        this->back = n - 1;
        v.resize(n);
    }

    void enqueue(int val){
        if(isFull()){
            return;
        }
        this->back = (back + 1) % ts;
        this->v[back] = val;
        this->cs++;
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }
        this->front = (front + 1) % ts;
        this->cs--;
    }

    int getFront(){
        if(front==-1)
            return -1;
        return this->v[front];
    }

    bool isEmpty(){
        return this->cs == 0;
    }

    bool isFull(){
        return this->cs == this->ts;
    }

};

// Queue using Stack
class QueueWithStack{
    stack<int> st;
public:
    QueueWithStack() {}

    void push(int val){
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(val);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

        void pop(){
            if(st.empty()){
                return;
            }
            st.pop();
        }

    bool empty(){
        return st.empty();
    }

    int front(){
        if(st.empty()){
                return INT_MIN;
        }
        return st.top();
    }

};

int main(){
    // Queue q(4);
    // q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.dequeue();
    // q.enqueue(40);
    // q.enqueue(50);

    // while(!q.isEmpty()){
    //     cout << q.getFront() << " ";
    //     q.dequeue();
    // }

    QueueWithStack qu;
    qu.push(5);
    qu.push(4);
    qu.push(9);
    qu.push(3);
    qu.pop();
    qu.pop();
    qu.push(7);

    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
}