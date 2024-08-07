#include<iostream>
using namespace std;

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

void preOrder(Node* root){
    if(root == NULL) return;

    //print root
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL) return;

    //print root
    preOrder(root->left);
    cout << root->data << " ";
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;

    //print root
    preOrder(root->left);
    preOrder(root->right);
    cout << root->data << " ";
}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

    preOrder(root);


}