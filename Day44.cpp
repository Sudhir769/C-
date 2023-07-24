#include <bits/stdc++.h>
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

class LinkedList{
    public:
        Node *head;

        LinkedList(){
            head = NULL;
        }

        void insertAtTail(int value){
            Node* new_node = new Node(value);
            if(head==NULL){
                head = new_node;
                return;
            }
            Node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
        void display(){
            Node *temp = head;
            while(temp!=NULL){
                cout << temp->val << "->";
                temp = temp->next;
            }
            cout << "NULL"<<endl;
        }
};





int main(){
        // sortListMain();
        
}