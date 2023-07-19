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

// 1->2->3->4->5->NULL
// 5 4 3 2 1
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

// 1->2->3->NULL
// 1->2->3->NULL
// 1
bool checkEqualLL(Node *head1, Node *head2){
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    while(ptr1 != NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
                        return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr1 == NULL && ptr2 == NULL;
}

int getLength(Node* head){
    Node *temp = head;
    int length = 0;
    while(temp!=NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

Node* moveHeadByK(Node* head, int k){
    Node *ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

// 1->2->3->4->5->NULL
// 6->8->4->5->NULL
// 4
Node* getIntersection(Node* head1, Node* head2){

    int l1 = getLength(head1);
    int l2 = getLength(head2);

    Node *ptr1, *ptr2;
    if(l1>l2){
        int k = l1 - l2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }else{
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }
    while(ptr1){
        if(ptr1 == ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

// 1->2->3->4->5->NULL
// 1->2->4->5->NULL
void removeKthNodeFromEnd(Node* &head, int k){
    Node *ptr1 = head;
    Node *ptr2 = head;

    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    Node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main(){
        // LinkedList ll;
        // ll.insertAtTail(1);
        // ll.insertAtTail(2);
        // ll.insertAtTail(3);
        // ll.insertAtTail(4);
        // ll.insertAtTail(5);
        // ll.insertAtTail(6);
        // ll.display();

        // deleteAlternate(ll.head);
        // deleteDuplicateNodes(ll.head);
        // ll.head = reverseLinkedList(ll.head);
        // ll.head = reverseLLRecursion(ll.head);
        // ll.head = reverseKll(ll.head, 3);
        // ll.display();

        LinkedList ll1;
        
        ll1.insertAtTail(1);
        ll1.insertAtTail(2);
        ll1.insertAtTail(3);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        // 1->2->3->4->5->NULL
        ll1.display();
        reversePrint(ll1.head);

        // LinkedList ll2;
        // ll2.insertAtTail(6);
        // ll2.insertAtTail(8);
        // ll2.head->next->next=ll1.head->next->next->next;
        // ll2.display();

        // cout << checkEqualLL(ll1.head, ll2.head);
        // Node *intersection = getIntersection(ll1.head, ll2.head);
        // if(intersection){
        //     cout << intersection->val;
        // }else{
        //     cout << -1;
        // }

        // removeKthNodeFromEnd(ll1.head, 3);
        ll1.display();
}