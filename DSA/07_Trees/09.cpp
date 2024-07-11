

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