#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"This is the constructor of base class"<<endl;
        }
        ~Base(){
            cout<<"This is the destructor of base class"<<endl;
        }
};

class Derived: public Base{
    public:
        Derived(){
            cout<<"This is the constructor of derived class"<<endl;
        }
        ~Derived(){
            cout<<"This is the destructor of derived class"<<endl;
        }
};

int main(){
    Derived d1;
    return 0;
}