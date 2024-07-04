#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(){
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top == size -1){
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top==-1){
            cout << "stack is empty" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top >= 0) return arr[top];
        else {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }
};

int main(){
    Stack st;
    st.size = 100;
    st.push(10);
    st.push(20);

    // cout << st.peek();
    st.pop();
    st.pop();

    cout << st.peek();

}