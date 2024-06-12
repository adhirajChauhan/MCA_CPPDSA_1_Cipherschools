//Constructors

//Constructor method is a special member function that is called automatically when an object is created.
//Constructor has same name as that of class
//It does not have return type
#include <iostream>
using namespace std;

class Employee{
    public:

    //Default constructor
    Employee(){
        cout << "From constructor " << endl;
    }
};

int main(){
    Employee e1;

    Employee e2;
}