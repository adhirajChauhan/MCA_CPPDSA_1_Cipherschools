// class Solution {
//   public:
//   int countNodes(struct Node* root){
//       if(root==NULL) return 0;
      
//       int ans = 1 + countNodes(root->left) + countNodes(root->right);
//       return ans;
//   }
  
//   bool isCBT(struct Node* root, int index, int cnt){
//       if(root == NULL) return true;
      
//       if(index >= cnt){
//           return false;
//       }
//       else{
//           bool left = isCBT(root->left, 2 * index + 1, cnt);
//           bool right = isCBT(root->right, 2 * index + 2, cnt);
//           return (left && right);
//       }
//   }
  
//   bool isMaxOrder(struct Node* root){
//       if(root->left == NULL && root->right == NULL) return true;
      
//       if(root->right == NULL) return(root->data > root->left->data);
      
//       else{
//           bool left = isMaxOrder(root->left);
//           bool right = isMaxOrder(root->right);
//           return(left && right && (root->data > root->left->data 
//           && root->data > root->right->data));
//       }
//   }
//     bool isHeap(struct Node* tree) {
//         int index = 0;
//         int totalCount = countNodes(tree);
//         if(isCBT(tree, index, totalCount) && isMaxOrder(tree)){
//             return true;
//         }
//         else return false;
//     }
// };




//------------------------


// class Solution{
//     public:
    
//     void heapify(vector<int> &arr, int n, int i){
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;

//         if(left < n && arr[largest] < arr[left]){
//             largest = left;
//         }
//         if(right< n && arr[largest] < arr[right]){
//             largest = right;
//         }

//         if(largest != i){
//             swap(arr[largest], arr[i]);
//             heapify(arr,n, largest);
//         }
//     }
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//         vector<int> ans;
        
//         for(int i : a){
//             ans.push_back(i);
//         }
//         for(int i : b){
//             ans.push_back(i);
//         }
        
//         int size = ans.size();
//         for(int i = size/2 - 1; i >= 0; i--){
//             heapify(ans,size,i);
//         }
//         return ans;
//     }
// };