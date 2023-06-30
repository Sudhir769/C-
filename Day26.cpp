#include <iostream>
#include <queue>

using namespace std;

struct Queue{
    int front, rear, capacity;
    int *queue;

    Queue(int c){
        this->capacity = c;
        front = rear = 0;
        queue = new int[c];
    }
    ~Queue() {
        delete[] queue;
    }

    void enqueue(int data){
        if(rear==capacity){
            cout << "queue if full" << endl;
            return;
        }else{
            queue[rear] = data;
            rear++;
        }
        return;
    }

void dequeue(){
    if(front==rear){
        cout<<"queue is empty"<<endl;
        return;
    }else{
        for (int i = 0; i < rear - 1;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
    return;
}
void queueDisplay(){
    int i;
    if(front==rear){
        cout<<"queue is empty"<<endl;
        return;
    }
    for (i = front; i < rear;i++){
        cout << queue[i]<<endl;
    }
    return;
}

void queueFront(){
    if(front == rear){
        cout <<"queue is Empty";
        return;
    }else {
        cout << queue[front]<<endl;
    }
    return;
}
};

int main(){
    Queue q(5);

    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(8);
    q.enqueue(7);
    q.enqueue(9);

    q.queueFront();
    q.dequeue();
    q.queueFront();
    q.queueDisplay();

}