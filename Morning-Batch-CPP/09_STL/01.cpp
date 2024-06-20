// STL -> Standard Template Library - provides a set of programming tools to
// implement algorithm and sata structures like vectors, list, queue etc

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // int arr[5] = {4,1,7,3,2};
  vector<int> num = {1, 2, 3, 4};
    vector<int>::iterator itr;
    
  // add
  num.push_back(10);

    //access
    // cout << "Element at 3 is : " << num.at(100) << endl;
    // cout << num[100] << endl;

    //change
    // num.at(0) = 50;

    //delete
    // num.pop_back();

    //iterators -> they are used to point to the memory address of a vector element, they somehow act like pointers
    
    // itr = num.begin() + 1;
    // cout << *itr << endl;
    
    // itr = num.begin();
     // cout << *(itr + 1) << endl;

    for(itr = num.begin(); itr != num.end(); itr++){
      cout << *itr << " "; 
    }

  // for (int item : num) {
  //   cout << item << " ";
  // }
}