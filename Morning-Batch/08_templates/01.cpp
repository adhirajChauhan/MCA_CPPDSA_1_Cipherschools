//Templates

#include<iostream>
using namespace std;

template <class T>
class Number{
    private:
    T num;

    public:
    Number(T number){
        num = number;
    }
    T getNum(){
        return num;
    }
};

//Template of a function
template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    Number<int> n1(10);
    cout << n1.getNum() << endl;;

    Number<double> n2(10.1);
    cout << n2.getNum();
}