// queue<int> modifyQueue(queue<int> q, int k) {
//         // pop first k elements from q and put in stack
//         stack<int> s;
        
//         for(int i = 0; i < k; i++){
//             int temp = q.front();
//             q.pop();
//             s.push(temp);
//         }
        
//         //fetch from stack and push in q
//         while(!s.empty()){
//             int temp = s.top();
//             s.pop();
//             q.push(temp);
//         }
        
//         //fetch first n-k elements from q and push back
//         int queueSize = q.size() - k;
//         while(queueSize--){
//             int temp = q.front();
//             q.pop();
//             q.push(temp);
//         }
        
//         return q;
//     }