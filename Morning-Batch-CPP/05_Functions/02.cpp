#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num ; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int dem = factorial(r) * factorial(n-r);
    return num/dem;
}

int main(){
    nCr(3,2);
}