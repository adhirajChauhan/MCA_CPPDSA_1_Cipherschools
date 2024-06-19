#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    //for -> 0, n
    //if -> arr[i] == key -> return true
    //otherwise return false
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

//erverse
void reverseArr(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//swap alternate elements of array
//pair sum
//triplet sum
//sort 0's and 1's
//find unique elements
//find duplicate

int main(){

}