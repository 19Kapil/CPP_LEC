//ambiguity in memeber accesss
#include<iostream>
using namespace std;

class BaseOne{
    public:
        void display(){
            cout<<"I am from BaseOne"<<endl;
        }
};

class BaseTwo{
    public:
        void display(){
            cout<<"I am from BaseTwo"<<endl;
        }
};

class Derived: public BaseOne,public BaseTwo{
    public:
        void drvdisplay(){
            display(); //error:ambiguous, which display to call
            BaseOne::display(); //ok: base class name is specified
            BaseTwo::display(); //ok: base class name is specified
        }
};

int main(){
    Derived Der;
    Der.display(); //error: ambiguous,which display to call
    Der.BaseOne::display(); //ok: display of BaseOne is called
    Der.BaseTwo::display(); //ok: display of BaseTwo is called
    return 0;
}