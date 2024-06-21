#include<iostream>
using namespace std;
//P1
// void sort0and1(int arr[], int size){
    //count variable to store how many 0's are there

    //for loop -> 0 , size
        //arr[i] == 0 -> count++

    //for loop -> 0, count
        //arr[i] = 0;

    //for loop -> count, size
        // arr[i] = 1
// }

//P2
// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

// int uniqueElements(int arr[], int size){
//     int i = 0;
//     for(int j = i + 1; j < size; j++){
//         if(arr[i] != arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i;
// }

string pairSum(vector<int> vec, int size, int target){
    sort(vec.begin(), vec.end());
    int i = 0;
    int j = size - 1;
    while( i<= j){
        int sum;
        sum = vec[i] + vec[j];
        if(sum == target) return "Yes";
        else if (sum < target) i++;
        else j--;
    }
    return "No";
}


int main(){
    // int arr[] = {1,1,2,2,2,3,3};
    // int k = uniqueElements(arr,7);
    // for(int i = 0; i <= k; i++){
    //     cout << arr[i] << " ";
    // }
}