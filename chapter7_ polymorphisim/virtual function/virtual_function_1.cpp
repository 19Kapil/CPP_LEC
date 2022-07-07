#include <iostream>
using namespace std;
class animal
{
    public:
    virtual void move()=0; 
      //pure virtual function.
     // a virtual function with null body called as pure virtual function.
    // the clas which has pure virtual function called as abstract class.

};
class dog: public animal{
    public:
    void move()
    {
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
