
#include<iostream>
using namespace std;

//Two Sum IV - Input is a BST

// void inorder(BinaryTreeNode<int>* root, vector<int> &vec){
//     if(root == NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);
// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	//Write your code here

//     vector<int> inorderVal;
//     inorder(root, inorderVal);

//     int i = 0;
//     int j = inorderVal.size() - 1;

//     while(i < j){
//         int sum = inorderVal[i] + inorderVal[j];
//         if(sum == target) return true;

//         else if(sum > target) j--;

//         else i++;
//     }

//     return false;




// }


//-----------------------------------------------

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* sortedArrayToBST(int arr[], int s, int e){
//     if(s > e) return NULL;
//     int mid = (s+e)/2;

//     Node* root= new Node(arr[mid]);
//     root->left = sortedArrayToBST(arr,s,mid-1);
//     root->right = sortedArrayToBST(arr, mid+1, e);

//     return root;
// }

// int main(){

// }




//----------------------------

// void inorder(TreeNode *root, vector<int> & vec){
//     if(root==NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);
// }

// vector<int> mergeArray(vector<int> &vec1, vector<int> &vec2){
//     vector<int> ans(vec1.size() + vec2.size());
//     int i = 0, j = 0;
//     int k = 0;

//     while(i < vec1.size() && j < vec2.size()){
//         if(vec1[i] < vec2[j]){
//             ans[k++] = vec1[i++];
//         }
//         else{
//             ans[k++] = vec2[j++];
//         }
//     }

//     while(i < vec1.size()){
//         ans[k++] = vec1[i++];
//     }
//     while(j < vec2.size()){
//         ans[k++] = vec2[j++];
//     }
//     return ans;
// }

// TreeNode* inorderToBST(int s, int e, vector<int> &vec){
//     if(s > e) return NULL;

//     int mid = (s+e)/2;
//     TreeNode* root = new TreeNode(vec[mid]);
//     root->left = inorderToBST(s, mid-1, vec);
//     root->right = inorderToBST(mid+1, e, vec);
//     return root;
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//     vector<int> bst1, bst2;
//     inorder((root1), bst1);
//     inorder(root2, bst2);


//     vector<int> mergedBST = mergeArray(bst1, bst2);

//     int s = 0;
//     int e = mergedBST.size() -1;
//     TreeNode* mergedBSTRoot = inorderToBST(s, e, mergedBST);

//     vector<int> result;

//     inorder(mergedBSTRoot, result);

//     return result;


// }
