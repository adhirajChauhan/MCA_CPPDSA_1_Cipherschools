#include <iostream>
using namespace std;

void myFunc2(){
    cout << "Hello";
    cout << "2" << endl;
}
void myFunc(){
    cout << "1" << endl;
}

int main(){
    myFunc2();
    myFunc();
}