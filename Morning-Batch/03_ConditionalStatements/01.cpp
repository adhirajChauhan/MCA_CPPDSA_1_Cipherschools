#include <iostream>
using namespace std;

int main(){
    // if(condition){

    // }
    // else if(){

    // }
    // else{

    // }


    int num1, num2 , num3;

    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3){
        cout << " Largest number is " << num1 << endl;
    }

    else if(num2 >= num1 && num2 >= num3){
        cout << " Largest number is " << num2 << endl;

    }
    else{
        cout << "Largest number is  " << num3 << endl;
    }
    }