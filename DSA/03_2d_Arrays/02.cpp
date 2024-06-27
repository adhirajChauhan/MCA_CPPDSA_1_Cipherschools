#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][4], int target, int row,int col){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}

int rowSum(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "MAx sum is : " << maximum << endl;
    return rowIndex;
}

void wavePrint(int arr[][4], int row, int col){
    for(int col = 0; col < 4; col++){
        if(col%2 == 1){
            for(int row = row -1; row >=0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // cout << "Element to search : ";
    // int target;
    // cin >> target;

    // if(isKeyPresent(arr,target,3,4)) cout << "Element is present" << endl;
    // else cout << "element is not found" << endl;


    cout << rowSum(arr, 3,4);
}