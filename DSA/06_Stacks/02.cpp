#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);

    st.pop();
    st.pop();

    
    cout << st.top(); 
}