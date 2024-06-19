#include<iostream>
using namespace std;

void updateArr(int arr[], int n){
    cout << "Entering update function" << endl;
    arr[0] = 10;
    for(int i = 0;i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Exiting update function" << endl;

}

int main(){
    int arr[3] = {1,2,3};

    updateArr(arr, 3);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}