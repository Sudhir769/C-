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

// 1->4->5->NULL
// 2->3->NULL
// 1->2->3->4->5->NULL
Node* mergeLinkedList(Node* &head1, Node* &head2){

        Node *dummyHeadNode = new Node(-1);

        Node *ptr1 = head1;
        Node *ptr2 = head2;
        Node *ptr3 = dummyHeadNode;

        while(ptr1 && ptr2){
            if(ptr1->val < ptr2->val){
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
            }else{
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
            ptr3=ptr3->next;
        }

        if(ptr1){
            ptr3->next = ptr1;
        }else{
            ptr3->next = ptr2;
        }

        return dummyHeadNode->next;
}

// 1->4->5->NULL
// 2->3->NULL
// 7->12->14->18->NULL
// 1->2->3->4->5->7->12->14->18->NULL
Node* mergeKLinkedList(vector<Node*> &lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
            Node *mergedHead = mergeLinkedList(lists[0], lists[1]);
            lists.push_back(mergedHead);
            lists.erase(lists.begin());
            lists.erase(lists.begin());
    }
    return lists[0];
}

void mergeLinkedListMain(){
    LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.display();

        LinkedList ll2;
        ll2.insertAtTail(2);
        ll2.insertAtTail(3);
        ll2.display();

        LinkedList ll3;
        ll3.head = mergeLinkedList(ll1.head, ll2.head);
        ll3.display();
}

void mergeKLinkedListMain(){
        LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.display();

        LinkedList ll2;
        ll2.insertAtTail(2);
        ll2.insertAtTail(3);
        ll2.display();

        LinkedList ll4;
        ll4.insertAtTail(7);
        ll4.insertAtTail(12);
        ll4.insertAtTail(14);
        ll4.insertAtTail(18);
        ll4.display();

        vector<Node *> lists = {ll1.head, ll2.head, ll4.head};
        LinkedList mergedLL;
        mergedLL.head = mergeKLinkedList(lists);
        mergedLL.display();
}

Node* findMiddleElement(Node* &head){

        Node *slow = head;
        Node *fast= head;

        while( fast!=NULL && fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
}

bool detectCylcle(Node* &head){

    if(!head){
            return false;
    }
        Node *slow = head;
        Node *fast = head;

        while(fast && fast->next){
            slow = slow->next;        
            fast = fast->next->next;

            if(fast==slow){
                cout << slow->val << endl;
                return true;
            }
        }
        return false;
}

void findMiddleElementMain(){
    LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.insertAtTail(7);
        ll1.insertAtTail(9);
        ll1.insertAtTail(13);
        ll1.display();

        Node* middleNode = findMiddleElement(ll1.head);
        cout << middleNode->val << endl;
}

void detectCycleMain(){
    LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.insertAtTail(7);
        ll1.insertAtTail(9);
        ll1.insertAtTail(13);
        ll1.display();
        ll1.head->next->next->next->next->next->next= ll1.head->next->next->next;

        cout << detectCylcle(ll1.head);
}

void removeCycle(Node* &head){
        Node *slow = head;
        Node *fast = head;

        do{
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        fast = head;
        while(slow->next!=fast->next){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = NULL;
}

void  removeCycleMain(){
    LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.insertAtTail(7);
        ll1.insertAtTail(9);
        ll1.insertAtTail(13);
        ll1.display();
        ll1.head->next->next->next->next->next->next= ll1.head->next->next->next;

        cout << detectCylcle(ll1.head)<<endl;
        removeCycle(ll1.head);
        ll1.display();
        cout << detectCylcle(ll1.head) << endl;
}

// 1->4->5->7->9->13->NULL
// 7->9->13->1->4->5->NULL
Node* rotateByK(Node* &head, int k){
        int n = 0;
        Node *tail = head;

        while(tail->next){
            n++;
            tail = tail->next;
        }
        n++;
        k = k % n;
        if(k==0){
            return head;
        }

        tail->next = head;
        Node *temp = head;

        for (int i = 1; i < n - k;i++){
            temp = temp->next;
        }
        Node *newHead = temp->next;
        temp->next = NULL;

        return newHead;
}
void rotateByKMain(){
    LinkedList ll1;
        ll1.insertAtTail(1);
        ll1.insertAtTail(4);
        ll1.insertAtTail(5);
        ll1.insertAtTail(7);
        ll1.insertAtTail(9);
        ll1.insertAtTail(13);
        ll1.display();
        ll1.head = rotateByK(ll1.head, 3);
        ll1.display();

}

int main(){
        // mergeLinkedListMain();
        // mergeKLinkedListMain();
        // findMiddleElementMain();
        // detectCycleMain();
        // removeCycleMain();
        rotateByKMain();
}