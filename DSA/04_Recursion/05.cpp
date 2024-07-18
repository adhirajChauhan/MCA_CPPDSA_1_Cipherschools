//quick sort
#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    //find the first element
    int pivot = arr[s];

    int count = 0;
    for(int i = s +1; i <=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //after count, we got to know about the right place of pivot, now we will create a var pivotIndex at that position

    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    int i= s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s>=e) return;

    int  p = partition(arr, s, e);

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);

}

int main(){
    int arr[5] = {3,4,7,1,9};

    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    } cout << endl;
}