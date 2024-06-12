#include<iostream>
using namespace std;

// class Students{
//     string name;
//     int age;
//     int rollNumber;

//     void giveTest(){

//     }
// };

//When a class is defined, only the specification for the object is defined, no memory is allocated.
class Calculation{
    public:
    double length;
    double breadth;
    double height;

    double calculateArea(){
        return length * breadth;
    }

    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){

    Calculation c1;
    c1.length = 5;
    c1.breadth = 10;
    c1.height = 15;

    Calculation c2;
    c2.length = 10;
    c2.breadth = 8;
    c2.height = 9;

    cout << c1.calculateArea() << endl;
    cout << c2.calculateArea() << endl;

    // cout << c1.length << endl;
    // cout << c2.length << endl;


}