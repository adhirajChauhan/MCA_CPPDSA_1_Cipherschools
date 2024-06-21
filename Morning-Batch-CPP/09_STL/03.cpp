// Set -> 1. unique elements - no two elements ina  set can be equal
// 2. immutable - we can add or remove elements from a set, but we can't change
// the values of existing element
//  sorted order - by default order is increasing but we have an option to
//  change that

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  unordered_set<int> un_set1 = { 4,2,6,1,4,3,9};

  un_set1.insert(20);
  
  for(int i : un_set1){
    cout << i << " ";
  }
  
}