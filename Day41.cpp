#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node(int  data){
            this->val = data;
            this->next = NULL;
        }
};

        void insert_at_head(Node* &head, int val){
            Node *newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }

        void insert_at_tail(Node* &head, int val){
            Node *newNode = new Node(val);
            Node *temp = head;

            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void insert_at_position(Node* &head, int val, int pos){
            if(pos==0){
                insert_at_head(head, val);
                return;
            }

            Node *newNode = new Node(val);
            Node *temp = head;
            int currentPos = 0;
        
            while(currentPos!=pos-1){
                temp = temp->next;
                currentPos++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void update_at_position(Node* &head, int k, int val){
            Node *temp = head;
            int curr_pos = 0;

            while(curr_pos !=k){
                temp = temp->next;
                curr_pos++;
            }
            temp->val = val;
        }

        void delete_at_head(Node* &head){
            Node *temp = head;
            head = head->next;
            free(temp);
        }

        void delete_at_tail(Node* &head){
            Node *second_last = head;
            while(second_last->next->next!=NULL){
                second_last = second_last->next;
            }
            Node *temp = second_last->next;
            second_last->next = NULL;
            free(temp);
        }

        void delete_at_position(Node* &head, int pos){

            if(pos==0){
                delete_at_head(head);
                return;
            }
            Node *previous = head;
            int curr_pos =0;
            while(curr_pos != pos -1){
                previous = previous->next;
                curr_pos++;
            }
            Node *temp = previous->next;
            previous->next = previous->next->next;
            free(temp);
        }

        void display(Node* head){
            Node *temp=head;
            while(temp!=NULL){
                cout << temp->val << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

int main(){
            Node *head = NULL;
            insert_at_head(head, 5);
            display(head);
            insert_at_head(head, 8);
            display(head);
            insert_at_head(head, 10);
            display(head);
            insert_at_tail(head, 3);
            display(head);
            insert_at_position(head, 6, 2);
            display(head);
            insert_at_position(head, 12, 0);
            display(head);
            update_at_position(head, 4, 4);
            display(head);
            update_at_position(head, 5, 2);
            display(head);
            delete_at_head(head);
            display(head);
            delete_at_tail(head);
            display(head);
            delete_at_position(head, 2);
            display(head);
}