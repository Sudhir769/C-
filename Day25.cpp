#include <iostream>
#include<stack>

using namespace std;
// Stacks

class Stack{
    public:
        int *arr;
        int size;
        int top;

    Stack (int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

};

int main(){
    Stack st(5);

    st.push(3);
    st.push(27);
    st.push(58);
    st.push(3);
    st.push(27);
    st.push(58);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    cout << st.isEmpty() << endl;
    cout << st.size<< endl;
    cout << *st.arr<< endl;

}