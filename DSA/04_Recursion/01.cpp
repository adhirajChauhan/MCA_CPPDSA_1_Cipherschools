//Recursion
// -> A function calls itself directly or indirectly

// func(int n){
    //func(n)
//}

#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0) return 1;

    return n * factorial(n-1);

}

int power(int n){
    if(n == 0) return 1;

    return 2 * power(n-1);
}

void goHome(int src, int dest){
    if(src == dest) return;

    goHome(src++, dest);
}

int fib(int n){
    //base case 
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

void print(int n){

    if(n == 0) return;

    cout << n << endl;

    print(n-1);

}

int main(){
    // cout << factorial(3);

    // cout << power(10);

    cout << fib(8);

    // print(5);
}