#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false;
    }//check first and second element, if cond is true, then it is not sorted
    else{
        return isSorted(arr + 1, size -1 );
    }
}

int getSum(int arr[], int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int remainigPart = getSum(arr+1, size -1);
    int sum = arr[0] + remainigPart;
    return sum;
}

int main(){

}