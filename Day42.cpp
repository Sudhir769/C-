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


// 2->4->6->8->10->12->NULL
// 2->6->10->NULL
void deleteAlternate(Node* &head){   
        Node *curr_node = head;
        while(curr_node !=NULL && curr_node->next != NULL){
            Node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node = curr_node->next;
        }
}

// 2->2->3->3->3->5->NULL
// 2->3->5->NULL
void deleteDuplicateNodes(Node* &head){
        Node *curr_node = head;
        while(curr_node!=NULL){
            while(curr_node->next!=NULL && curr_node->val == curr_node->next->val ){
                        Node *temp = curr_node->next;
                        curr_node->next = curr_node->next->next;
                        free(temp);
                    }
                curr_node = curr_node->next;
        }
}
void reversePrint(Node* &head){
    if(head == NULL){
                return;
    }
    reversePrint(head->next);
    cout << head->val << " ";
}
// 2->2->3->3->3->5->NULL
// 5->3->3->3->2->2->NULL
Node* reverseLinkedList(Node* head){
    Node *prevptr = NULL;
    Node *currptr = head;

    while(currptr!=NULL){
                Node *nextptr = currptr->next;
                currptr->next = prevptr;
                prevptr = currptr;
                currptr = nextptr;
    }
    return prevptr;
}
// 2->2->3->3->3->5->NULL
// 5->3->3->3->2->2->NULL
Node* reverseLLRecursion(Node* &head){
    if(head==NULL || head->next==NULL){
                return head;
    }
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next= NULL;
    return new_head;
}

// 1->2->3->4->5->6->NULL
// 3->2->1->6->5->4->NULL
Node* reverseKll(Node* &head, int k){
    Node *prevptr = NULL;
    Node *currptr = head;

    int counter = 0;
    while(currptr!=NULL && counter<k){
                Node *nextptr = currptr->next;
                currptr->next = prevptr;
                prevptr = currptr;
                currptr = nextptr;
                counter++;
    }
    if(currptr!=NULL){
        Node* new_head = reverseKll(currptr, k);
        head->next = new_head;
    }

    return prevptr;
}

int main(){
        LinkedList ll;
        ll.insertAtTail(1);
        ll.insertAtTail(2);
        ll.insertAtTail(3);
        ll.insertAtTail(4);
        ll.insertAtTail(5);
        ll.insertAtTail(6);
        ll.display();
        // deleteAlternate(ll.head);
        // deleteDuplicateNodes(ll.head);
        // ll.head = reverseLinkedList(ll.head);
        // ll.head = reverseLLRecursion(ll.head);
        ll.head = reverseKll(ll.head, 3);
        ll.display();

}