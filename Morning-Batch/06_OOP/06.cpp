//Types of inheritance
#include<iostream>
using  namespace std;

//Multilevel
// class A{

// };
// class B : public A{

// };
// class C : public B{

// };

//-----------------------------
//Multiple
// class A{
//     public:
//     void print(){

//     }
// };
// class B{
//     void print(){

//     }
// };
// class C : public A, public B{

// };
//-----------------------------

//Hierarchical 
class A{

};

class B : public A{

};
class C : public A{

};

int main(){
    C c1;
    // c1.A::print();
}