#include <bits/stdc++.h>
using namespace std;

// Binary Tree
class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            this->data = d;
            this->left = NULL;
            this->right= NULL;
        }
};

node* buildTree(node* root){
        cout << "Enter the data :" << endl;
        int data;
        cin >> data;

        root = new node(data);

        if(data==-1){
            return NULL;
        }

        cout << "Enter data for left node :" << endl;
        root->left = buildTree(root->left);
        cout << "Enter data for right node :" << endl;
        root->right = buildTree(root->right);

        return root;
}

void levelOrderTraversal(node* root){
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            node *temp = q.front();
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

void builFromLevelorder(node* &root)
{
    queue<node *> q;
    cout << "enter data for root :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter data for right node :" << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        { // check whether user input is valid or not, otherwise it will create
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter data for right node :" << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        { // check whether user input is valid or not, otherwise it will create
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

void inOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    cout << root->data << " ";
}

int main(){
        node *root = NULL;

        // 1 3 5 7 11 13 17 -1 -1 -1 -1 -1 -1
        builFromLevelorder(root);

        // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
        // root = buildTree(root);

        cout << "Printing Level Order traversal :" << endl;
        levelOrderTraversal(root);

        cout << "Printing inOrder traversal :" << endl;
        inOrderTraversal(root);

        cout << "Printing pre order traversal :" << endl;
        preOrderTraversal(root);

        cout << "Printing post order traversal :" << endl;
        postOrderTraversal(root);
}