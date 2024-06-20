#include<iostream>
using namespace std;

int main(){

    // int x = 5;
    // int *ptr = &x;
    // cout << x << endl; //print the value of x
    // cout << &x << endl; // print the address of x
    // cout << ptr << endl; //print the addess of x
    // cout << *ptr << endl;









    int var = 10;
    int *ptr;
    ptr = &var;

    int *ptrNull = NULL;

    cout << *ptr << endl; //10
    cout << &ptr << endl; //address of ptr
    cout << ptr << endl; //address of var
    cout << &var << endl; //address of var
    cout << ptrNull << endl;
}