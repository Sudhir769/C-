#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

// using linked List
class QueueLL{
    Node* head;
    Node *tail;
    int size;

public:
    QueueLL(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enqueue(int val){
        Node *newNode = new Node(val);
        if(this->head==NULL){
            this->head = this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    void dequeue(){
        if(this->head==NULL){
            return;
        }
        Node *temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
        }
        free(temp);
        size--;
    }

    int getSize(){
        return this->size;
    }

    bool empty(){
        return this->head == NULL;
    }
    int getFront(){
        if(this->head==NULL){
            return -1;
        }else{
            return this->head->data;
        }
    }
};

//  using array
class QueueArray{
    int front;
    int back;
    vector<int> v;
public:
    QueueArray(){
        this->back = -1;
        this->front = -1;
    }

    void enqueue(int val){
        this->v.push_back(val);
        this->back++;
        if(this->back==0){
            this->front = 0;
        }
    }
    void dequeue(){
        if(this->front==this->back){
            this ->front = -1;
            this->back = -1;
            v.clear();
        }else{
            this->front++;
        }
    }
    int getFront(){
        if(this->front==-1){
            return -1;
        }
        return this->v[this->front];
    }
    bool empty(){
        return this->front == -1;
    }
};

int main(){
    QueueLL q;
    // QueueArray q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.enqueue(50);

    while(!q.empty()){
        cout << q.getFront() << " ";
        q.dequeue();
    }

}