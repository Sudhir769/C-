#include <bits/stdc++.h>
using namespace std;

// Binary Search Tree

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int d){
        if(root==NULL){
            root= new Node(d); // Create a node and assign the value of 'd' in
            return  root ;      // it. Return pointer to that newly created node as we have inserted
        }
        if(d > root->data ){
            root->right = insertIntoBST(root->right, d);
        }else{
            root->left = insertIntoBST(root->left, d);
        }
        return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

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

Node* minValue(Node* root){
    // Base case: If tree is empty, return null node pointer
    if (root == nullptr) {
        return nullptr;
        }

        Node *temp = root;
        /* Traverse the left subtree until we reach a leaf */
        while(temp->left != NULL){
            temp=temp->left ;
        }
        return temp;
}

Node* maxValue(Node* root){
    // Base case: If tree is empty, return null node pointer
    if (root == nullptr) {
        return nullptr;
        }

        Node *temp = root;
        /* Traverse the left subtree until we reach a leaf */
        while(temp->right != NULL){
            temp=temp->right ;
        }
        return temp;
}

Node* deleteFromBST(Node* root, int value){

        // Base Case
        if(root==NULL){
            return root;
        }
        if(root->data==value){
            // 0 Child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // left cild
            if(root->left != NULL &&  root->right==NULL){
                Node *temp = root->left;
                delete root;
                return temp;
            }

            // right child
            if(root->right != NULL &&  root->left==NULL){
                Node *temp = root->right;
                delete root;
                return temp;
            }
            //  2 child
            if(root->left != NULL && root->right != NULL){
                int mini = minValue(root->right)->data;
                root->data = mini;
                root->right = deleteFromBST(root->right, mini);
                return root;
            }
        }else if(root->data >value){
            root->left = deleteFromBST(root->left, value);
            return root;
        }else{
            root->right=deleteFromBST(root->right, value);
            return root;
        }

}


int main(){
    Node *root = NULL;

    cout << " Enter data to create BST :" << endl;
    takeInput(root);

    cout << "Printing Level Order traversal :" << endl;
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing inOrder traversal :" << endl;
    inOrderTraversal(root);
    cout << endl;
    cout << endl;

    cout << "Printing pre order traversal :" << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << endl;

    cout << "Printing post order traversal :" << endl;
    postOrderTraversal(root);
    cout << endl;
    cout << endl;

    cout << "Minimum Value in BST is :" << minValue(root)->data << endl;
    cout << "Maximum Value in BST is :" << maxValue(root)->data << endl;

    // root = deleteFromBST(root, 50);
    // levelOrderTraversal(root);
}