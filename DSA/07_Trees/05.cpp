#include<iostream>
#include<queue>
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

int search(int inorder[], int start, int end, int curr){
    for(int i = start; i <= end; i++){
        if(inorder[i] == curr){
            return i;
        }
        return -1;
    }
}

Node* buildTree(int preorder[], int inorder[], int start, int end){
    int i = 0;
    int curr = preorder[i];
    i++;

    Node* node = new Node(curr);

    if(start==end) return node;
    
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1, end);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
}