#include <bits/stdc++.h>
using namespace std;

// linked list
class Node{
    public:
        int data;
        Node *next;

        // constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        // Destructor
        ~Node(){
            int value = this->data;
            if(this->next !=NULL){
                delete next;
                this->next == NULL;
            }        
        }
};

void insertAtHead(Node *head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head ,int position, int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int i = 0;
    while(i < position){
        temp = temp->next;
        i++;
        }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
        }
        cout << endl;
}

struct node{
    int data;
    node *next;
};

void printList(node *head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void pushFront(node* &head, int data){
    node *temp = new node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void pushAfter(node *prev_node, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}
void pushEnd(node* &head, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
        }
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            }
        temp->next = newNode;
        return;
}

// babbar delete
void deleteNode(node* &head, int pos){
    if(pos==1){
        node* temp = head;
        head = head->next;
        delete temp;
    }else{
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        delete curr;
    }
}



int main(){
    // struct main
    node *head = new node();
    head->data = 3;
    head->next = NULL;

    pushFront(head,2);
    pushFront(head,1);
    pushEnd(head,5);
    pushEnd(head, 4);
    pushAfter(head->next->next->next->next, 15);

    deleteNode(head, 2);

    printList(head);
}