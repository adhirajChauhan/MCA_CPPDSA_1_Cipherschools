// void insertAtBottom(stack<int> &stack, int num)
// {
//     //base case
//     if(stack.empty()){
//         stack.push(num);
//         return;
//     }

//     int num1 = stack.top();
//     stack.pop();

//     insertAtBottom(stack, num);

//     stack.push(num1);
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     //base case
//     if(stack.empty()) return;

//     int num = stack.top();
//     stack.pop();

//     reverseStack(stack);

//     insertAtBottom(stack, num);



// }