//Runtime polymorphism/Late binding
//Virtual function is a member function in the base class that you redefine in the derieved class.

//A virtual function must be defined in the base class, even though it is not used
//Virtual function must be member of some class
//They are accessed through object pointers

#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "From Base " << endl;
    }
};

class Derieved : public Base{
    public:
    void display() override{
        cout << "From Derieved " << endl;
    }
};

int main(){
    Derieved d1;
    Base *ptr = &d1;
    ptr->display();
}