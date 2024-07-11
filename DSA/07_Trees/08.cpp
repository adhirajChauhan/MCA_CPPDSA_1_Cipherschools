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

Node* searchBST(Node* root, int key){
    if(root == NULL) return NULL;

    if(root->data ==  key) return root;

    //data > key
    if(root->data > key) return searchBST(root->left, key);
    //data < key
    return searchBST(root->right, key);
}

Node* minValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp ->left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    if(root==NULL) return root;

    if(root->data == val){
        //Zero child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child
        if(root->left != NULL && root->right ==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        //either find max from the left subtree or min from the right subtree
        int minVal = minValue(root->right)->data;
        //replace the val
        root->data = minVal;
        root->right = deleteFromBST(root->right, minVal);
        return root;

    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }   
}

int main(){

}