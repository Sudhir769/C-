#include <bits/stdc++.h>
using namespace std;

class Stack{
    int capacity;
    int *arr;
    int top;

    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top==this->capacity-1){
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    void pop(){
        if(this->top==-1){
            cout << "Underflow\n";
            return;
        }
        this->top--;
    }
    int getTop(){
        if(this->top==-1){
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        if(this->top==-1){
            return true;
        }
        return false;
    }
    int size(){
        return top + 1;
    }
    bool isFull(){
        return this->top = this->capacity-1;
    }
};

int main(){
    Stack st(5);
    st.push(82);
    st.push(32);
    st.push(27);
    st.push(67);
    cout << st.getTop() << endl;
    st.push(74);
    cout << st.getTop() << endl;
    st.push(44);
}