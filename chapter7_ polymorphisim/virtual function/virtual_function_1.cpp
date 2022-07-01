#include <iostream>
using namespace std;
class animal
{
    public:
    virtual void move()=0;   //pure virtual function.

};
class dog: public animal{
    public:
    void move(){
        cout<<"dog runs"<<endl;
    }
};
int main()
{
    animal *a1;
    dog d1;
    a1 = &d1;
    a1->move();
    
}