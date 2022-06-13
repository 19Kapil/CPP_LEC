// constructor in base class only.
#include<iostream>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"default constructor from base class";

    }
};
class derived : public base
{
    //body of derived class
};
int main(){
    derived d;
}

