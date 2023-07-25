#include<bits/stdc++.h>
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
        
        void display(){
            Node *temp = head;
            cout << "NULL<-";
            while(temp!=NULL){
                cout << temp->val << "<->";
                temp = temp->next;
            }
            cout << "NULL"<<endl;
            // cout << endl;
        }

};

// NULL<-1<->3<->5<->7<->NULL
// NULL<-7<->5<->3<->1<->NULL
void reverseDLL(Node* &head, Node* &tail){
        Node *curr = head;
        while(curr){
            Node *next = curr->next;
            curr->next = curr->prev;
            curr->prev = next;
            curr = next;
        }
        Node *newHead = tail;
        tail = head;
        head = newHead;
}

bool isPalindrome(Node* head, Node* tail){

    while(head!=tail && tail!=head->prev){
        if(head->val != tail->val){
                return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

// NULL<-2<->1<->1<->2<->1<->NULL
// NULL<-2<->1<->1<->NULL
void deleteSameNeighbourNode(Node* &head, Node* &tail){
    Node *curr = tail->prev;

    while(curr!=head){
        Node *prev = curr->prev;
        Node *next = curr->next;
        if(prev->val==next->val){
                prev->next = next;
                next->prev = prev;
                free(curr);
        }
        curr = prev;
    }
}

bool isCriticalPoint(Node* curr){
    if(curr->val > curr->prev->val && curr->val >curr->next->val){
        return true;
    }
    if(curr->val < curr->prev->val && curr->val < curr->next->val){
        return true;
    }
    return false;
}

// NULL<-1<->5<->2<->4<->6<->3<->NULL
// 1 3
vector<int> distanceBetweenCriticalPoints(Node* head, Node* tail){
    vector<int> ans(2, INT_MAX);
    int firstCP = -1, lastCP = -1;

    Node *curr = tail->prev;
    if(curr==NULL){
        ans[0] = ans[1] = -1;
        return ans;
    }
    int currPos = 0;
    while(curr->prev!=NULL){
        if(isCriticalPoint(curr)){
            if(firstCP==-1){
                firstCP = lastCP = currPos;
            }else{
                ans[0] = min(ans[0], currPos - lastCP);
                ans[1] = currPos - firstCP;
                lastCP = currPos;
            }
        }
        currPos++;
        curr = curr->prev;
    }
    if(ans[0]==INT_MAX){
        ans[0] = ans[1] = -1;
    }
    return ans;
}

vector<int> twoSum(Node* head, Node* tail, int target){

    while(head!=tail){
        int sum = head->val + tail->val;
        if(sum==target){
            return {head->val, tail->val};
        }else if(sum>target){
            tail = tail->prev;
        }else{
            head = head->next;
        }
    }
    return {-1, -1};
}


int main(){
    DoublyLinkedList dll;
    dll.insertAtStart(10);
    dll.insertAtStart(8);
    dll.insertAtStart(6);
    dll.insertAtStart(5);
    dll.insertAtStart(2);
    dll.display();

    // reverseDLL(dll.head, dll.tail);
    // dll.display();
    // cout << endl;

    // cout << isPalindrome(dll.head, dll.tail) << endl;

    // deleteSameNeighbourNode(dll.head, dll.tail);
    // dll.display();

    // vector<int> ans = distanceBetweenCriticalPoints(dll.head, dll.tail);
    // cout << ans[0] << " " << ans[1] << endl;

    vector<int> vecAns = twoSum(dll.head, dll.tail, 11);
    cout << vecAns[0] << " " << vecAns[1] << endl;
}
