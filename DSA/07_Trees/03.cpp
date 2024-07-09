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


int sumAtK(Node* root, int k){
    if(root == NULL) return -1;

    //first we will create a queue and push root and NULL
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp!= NULL){
            if(level == k){
                sum += temp->data;
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int countNodes(Node* root){
    if(root ==NULL) return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}

int sumNode(Node* root){
    if(root == NULL) return 0;

    return sumNode(root->left) + sumNode(root->right) + root->data;
}

int calcHeight(Node* root){
    if(root == NULL) return 0;
    // int leftHeight = calcHeight(root->left);
    // int rightHeight = calcHeight(root->right);
    return max(calcHeight(root->left), calcHeight(root->right)) + 1;

}

void sumReplace(Node* root){
    if(root == NULL) return;

    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left!= NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }

}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

    // cout << sumAtK(root, 1);
    cout << calcHeight(root);
}