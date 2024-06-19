//Arrays
#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr[5] = {1,2,3,4,5};

    cout << "Enter 5 numbers " ;

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    printArr(arr,5);
    // cout << endl;

    // cout << arr[5];


    // for(int item : arr){
    //     cout << item << " " ;
    // }
}