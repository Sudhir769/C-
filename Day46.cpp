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

template<typename T>
class node{
    public:
        T val;
        node *next;

        node(T data){
            val = data;
            next = NULL;
        }
};

void listSTL(){
    list<int> l1 = {1, 3, 5, 7, 9};
    list<int> l2 = {62, 74, 83, 59, 42};
    auto itr1 = l1.begin();
    auto itr2 = l1.end();
    cout << *itr1 << " " << *itr2 << endl;

    auto itr3= l1.rbegin();
    auto itr4 = l1.rend();
    cout << *itr3 << " " << *itr4 << endl;

    advance(itr1, 2);
    cout << *itr1 << endl;

    for(auto num: l1){
        cout << num << " ";
    }
    cout << endl;

    for (auto itr = l2.begin(); itr != l2.end();itr++){
        cout << *itr << " ";
    }
    cout << endl;

    for (auto itr = l2.rbegin(); itr != l2.rend();itr++){
        cout << *itr << " ";
    }
    cout << endl;

    itr1 = l1.begin();
    itr1 = l1.begin();

    advance(itr1, 1);
    l1.insert(itr1, 2);
    l1.insert(itr1, 2, 2);
    l1.insert(itr1, itr1,itr2);

    for(auto num: l1){
        cout << num << " ";
    }
    cout << endl;

    // l1.erase(itr1);

    l1.erase(itr1, itr2);
    for(auto num: l1){
        cout << num << " ";
    }
    cout << endl;

    l1.push_front(0);
    l1.push_back(11);
    
    for(auto num: l1){
        cout << num << " ";
    }
    cout << endl;

    l1.pop_front();
    l1.pop_back();
    
    for(auto num: l1){
        cout << num << " ";
    }
    cout << endl;
}

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

    node<int> *node1 = new node<int>(1);
    node<string> *node2 = new node<string>("Sudhir");
    cout << node1->val<<endl;
    cout << node2->val<<endl;

    listSTL();
}