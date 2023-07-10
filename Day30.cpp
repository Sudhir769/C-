#include <bits/stdc++.h>
using namespace std;

// Convert BST to Min Heap

struct Node{
    int data;
    Node *left, *right;
};

Node* getNode(int value){
        struct Node *root = new Node;
        root->data = value;
        root->right = NULL;
        root->left = NULL;

};

class Solution {
        int i = 0;
        vector<int> v;
        
        public:
        void preOrder(Node *root){
            if(root==NULL){
                return;
            }
         // NLR
    
        root->data = v[i++];
        preOrder(root->left);
        preOrder(root->right);
        }

        void inOrder(Node* root){
            if(root==NULL){
                return;
            }
        // LNR
            inOrder(root->left);
            v.push_back(root->data);
            inOrder(root->right);
        }

        void BSTToMinHeap(Node* root){
            inOrder(root);
            preOrder(root);
        }

};

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // NLR
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
void levelOrderTraversal(Node* root){
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node *temp = q.front();
            q.pop();

            if(temp==NULL){
                cout << endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root = getNode(4);
    root->left =  getNode(2);
    root->right = getNode(6 );
    root->left->left= getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);

    // inOrderTraversal(root);
    // cout << endl;
    // preOrderTraversal(root);
    // cout << endl;
    // postOrderTraversal(root);
    // cout << endl;
    levelOrderTraversal(root);
    cout << endl;
    
    Solution ob;
    ob.BSTToMinHeap(root);

    levelOrderTraversal(root);

    
}