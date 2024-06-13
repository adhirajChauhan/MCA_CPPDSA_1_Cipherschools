//Constructors

//Constructor method is a special member function that is called automatically when an object is created.
//Constructor has same name as that of class
//It does not have return type
#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    //Default constructor
    Employee(){
        cout << "From constructor " << endl;
    }

    //Parameterized constructors

    Employee(int empID){
        id = empID;
    }

    // Employee(int empID, string EmpName){
    //     id = empID;
    //     name = EmpName;
    // }

    Employee(int id, string name){
        this->id = id;
        this->name = name;
    }

    void print(){
        cout << "Employee id is : " << id <<  " name is : " << name << endl;
    }

    ~Employee(){
        cout << "Destructor called"<< endl;
    }
};

int main(){
    Employee e1;
    Employee e2;
    Employee e3(100);
    e3.print();

    Employee e4(200,"john");
    e4.print();
}