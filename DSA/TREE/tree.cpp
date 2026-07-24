#include <iostream>
#include <vector>
using namespace std;
static int idx = -1;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
// void getNextNode(Node* root){
//     root
// }
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<< root->data << " ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data << " ";
}
// void ;

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    preOrder(root);
    cout<< endl;

    inOrder(root);
    cout<< endl;

    postOrder(root);
    
    // cout << root->data<< endl;
    // cout<< "LEFT";
    // cout << root->left->data<< endl;

    // cout<< "RIGHT:";
    // cout << root->right->data<< endl;
    // cout << root->right->left->data<< endl;
    // cout << root->right->right->data<< endl;
    
    
    return 0;
}