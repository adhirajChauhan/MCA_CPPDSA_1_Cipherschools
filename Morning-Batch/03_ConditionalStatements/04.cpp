#include<iostream>
using namespace std;

int main(){
    //switch case
    char op;
    float num1, num2;

    cout << "Enter an operator (+ - * /)" << endl;
    cin >> op;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
    cout << "Error";
        break;
    }
}