//Inheritance
#include<iostream>
using namespace std;

class Base{
    public:
    void print(){
        cout << "From Base class " << endl;
    }
};
class Derived : public Base{
    public:
    void print(){
        cout << "From Derived " << endl;
    }
};

int main(){
    // Derived d1, d2;
    // d1.print();
    // d2.Base::print();

    Derived d1;
    Base *ptr = &d1;

    ptr->print();

}