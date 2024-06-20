//STL -> Standard Template Library - provides a set of programming tools to implement algorithm and sata structures like vectors, list, queue etc

#include<iostream>
#include <vector>
using namespace std;

int main(){
    // int arr[5] = {4,1,7,3,2};
    vector<int> num = {1,2,3,4};

    for(int item : num){
        cout << item << " ";
    }


}