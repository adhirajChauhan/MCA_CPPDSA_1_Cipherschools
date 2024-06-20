//Inheritance

#include<iostream>
using namespace std;

class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class class1 : public Base{
    //x is public
    //y is proected
    //z is not accessible
};
class class2 : protected Base{
    //x is protected
    //y is protected
    //z is not accessible
};
class class3 : private Base{
    //x is private
    //y is private
    // z is not accessible
};

int main(){

}