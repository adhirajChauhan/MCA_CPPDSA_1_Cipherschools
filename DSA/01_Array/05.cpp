//Binary search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    if(arr[mid] == key){
        return mid;
    }
    while(start<=end){
        if(key > arr[mid]){
            //goto right part of array
            start = mid + 1;
        }
        else{
            //goto left
            end = mid - 1;
        }
        mid = (start + end)/2;
    }

    return -1;
}

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid =  (start + end)/2;
    int ans = -1;
while(start<=end){

    if(arr[mid]== key){
        ans = mid;
        end = mid - 1;
    }
    else if(key < arr[mid]){
        end = mid-1;
    }
    else if(key > arr[mid]){
        start = mid+1;
    }
    mid = (start+end)/2;

    }
    return ans;
}

//Lower Bound
//-> Given a sorted array of N integers and an in integer x, find the lower bound of x
// Lower bound algo finds the first or the smallest index in a sorted array where the value at that given index is greater than or euql to a given key i.e -> x

int main(){

}