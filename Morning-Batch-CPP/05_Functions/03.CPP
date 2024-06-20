#include <iostream>
using namespace std;
//Pass by value
void test(int n){
    n++;
    cout << "Value of n is : " << n << endl;
}

int main(){
    int n;
    cin >> n;

    test(n);
    cout << "Value in main : " << n << endl; 
}