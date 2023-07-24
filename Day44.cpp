#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data){
        this->val =data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DoublyLinkedList{
    public:
        Node *head;
        Node *tail;

        DoublyLinkedList(){
            head = NULL;
            tail =  NULL;
        }

        void insertAtStart(int value){
            Node* new_node = new Node(value);
            if(head==NULL){
                head = new_node;
                tail = new_node;
                return;
            }

            new_node->next = head;
            head->prev = new_node;
            head = new_node;
            return;
        }
        void insertAtEnd(int val){
            Node *new_node = new Node(val);
            if(tail==NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
            return;
        }

        void display(){
            Node *temp = head;
            cout << "NULL<-";
            while(temp!=NULL){
                cout << temp->val << "<->";
                temp = temp->next;
            }
            cout << "NULL"<<endl;
            cout << endl;
        }

        void insertAtPosition(int val, int k){
            Node *temp = head;
            int counter = 1;
            while(counter<(k-1)){
                temp = temp->next;
                counter++;
            }
            Node *new_node = new Node(val);
            new_node->next = temp->next;
            temp->next = new_node;

            new_node->prev = temp;
            new_node->next->prev = new_node;
            return;
        }

        void deleteAtStart(){
            if(head==NULL){
                return;
            }
            Node *temp = head;
            head = head->next;
            if(head==NULL){
                tail = NULL;
            }else{
                head->prev = NULL;
            }
            free(temp);
            return;
        }

        void deleteAtEnd(){
            if(head==NULL){
                return;
            }

            Node *temp = tail;
            tail = tail->prev;
            if (tail==NULL){
                head = NULL;
            }else{
                tail->next = NULL;
            }
            free(temp);
            return;
        }

        void deleteAtPosition(int k){
            Node *temp = head;
            int counter = 1;
            while(counter<k){
                temp = temp->next;
                counter++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
};





int main(){
        Node *new_node = new Node(3);

        DoublyLinkedList dll;

        dll.insertAtStart(5);
        dll.insertAtStart(3);
        dll.insertAtStart(1);

        dll.insertAtEnd(7);
        dll.insertAtEnd(9);
        dll.insertAtEnd(11);

        dll.insertAtPosition(2, 2);
        dll.insertAtPosition(4, 4);
        dll.insertAtPosition(6, 6);
        dll.insertAtPosition(8, 8);
        dll.insertAtPosition(10, 10);

        dll.display();

        dll.deleteAtStart();
        dll.display();

        dll.deleteAtEnd();
        dll.display();

        dll.deleteAtPosition(5);
        dll.display();
}