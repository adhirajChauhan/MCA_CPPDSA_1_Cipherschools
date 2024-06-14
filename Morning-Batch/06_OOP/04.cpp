//Inheritance
//It allows us to create nre class(derived class/child class) from an existing class(Base class/parent class);
//The child class inherits the features from the parent class and can also have additional features of its own.

#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
    protected:
    void protectedMethod(){

    }
    private:
    void privateMethod(){

    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking..." << endl; 
    }
    void printProtected(){
        protectedMethod();
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.bark();
    // d1.protectedMethod();

    Animal a1;
    a1.
}