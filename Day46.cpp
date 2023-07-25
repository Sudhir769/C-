#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int data){
        this->val =data;
        this->next = NULL;
    }
};

class CircularLinkedList{
    public:
        Node *head;

        CircularLinkedList(){
            head = NULL;
        }

void insertAtStart(int val){
        Node *new_node = new Node(val);
        if (head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node *tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val){
        Node *new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }
    void deleteAtStart(){
        if(head==NULL){
            return;
        }
        Node *temp = head;
        Node *tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        free(temp);
    }
    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node *tail = head;
        while(tail->next->next !=head){
            tail = tail->next;
        }
        Node *temp = tail->next;
        tail->next = head;
        free(temp);
    }

    void display(){
        Node* temp = head;
        do{
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp!= head);
        cout << endl;
    }
};


int main(){
    CircularLinkedList cll;
    cll.insertAtStart(3);
    cll.insertAtStart(1);
    cll.insertAtEnd(5);
    cll.insertAtEnd(7);

    cll.display();
    cll.deleteAtStart();
    cll.deleteAtEnd();
    cll.display();
}