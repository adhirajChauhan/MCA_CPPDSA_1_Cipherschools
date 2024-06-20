#include <iostream>
using namespace std;

// void add(int num1, int num2){
//     cout << num1 + num2;
// }

// void myFunc(){
//     cout << "1" << endl;
// }
// int add(){
//     return 10;
// }
// int add();

void func(string name, int age = 10, int x){
    cout << " Name is : " << name << " Age is : " << age << endl;
}


int main(){
    func("Adhiraj", 15, 13);
    // cout << add();
    // int ans = add(2,3);
    // cout << ans;
}


