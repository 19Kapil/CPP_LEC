//constructor in both base and derived class.
#include <iostream>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"default constructor from base class"<<endl;
    }
};
class derived : public base
{
    public:
    derived(){
        cout<<"defult constructor from derived class "<<endl;
    }
};

int main()
{
    derived d;
}