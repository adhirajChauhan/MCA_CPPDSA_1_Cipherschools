//Pure virtual functipns
//why?
// if a function doesn't have any use in the base class but the function must be implemented by all its derieved classes

//A class that contains a pure virtual function is known as abstract class.

#include <iostream>
using namespace std;

class A{
    public:
    virtual void display() = 0;
};

class B : public A{
    public:
    void display() override{
        cout << "From B " << endl;
    }
};

class C : public A{
    public:
    void display() override{
        cout << "From C " << endl;
    }
};

int main(){
    C c1;
}