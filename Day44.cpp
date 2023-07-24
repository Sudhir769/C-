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


// 9->5->13->4->1->7->NULL
// 1->4->5->7->9->13->NULL
Node* sortList(Node* head) {
        if(head==NULL || head->next==NULL) return head;

        Node* start = head;

        while(start){
            Node* temp = start;
            Node* minNode=start;
            int mini=INT_MAX;

            while(temp){
                if(temp->val < mini){
                    mini=temp->val;
                    minNode=temp;
                }
                temp=temp->next;
            }
            int tempVal = start->val;
            start->val=minNode->val;
            minNode->val=tempVal;

            start=start->next;

        }
        return head;
    }

void sortListMain(){
    LinkedList ll1;
        ll1.insertAtTail(9);
        ll1.insertAtTail(5);
        ll1.insertAtTail(13);
        ll1.insertAtTail(4);
        ll1.insertAtTail(1);
        ll1.insertAtTail(7);
        ll1.display();

        ll1.head = sortList(ll1.head);
        ll1.display();
}



int main(){
        // sortListMain();
        
}