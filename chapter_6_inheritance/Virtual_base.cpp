#include <iostream>
using namespace std;
class A{
    public:
    int a = 19;
    void displayA(){
        cout<<"dispay: "<<a<<endl;
        
    }
};
class B :  public virtual  A{
    public:
    void displayB(){
      cout<<"display: "<<endl;
    }


};
class C :  public virtual  A{
    public:
    void displayC(){
        cout<<"display: "<<endl;
    }

};
class D : public B , public C
{
public:
void displayD(){
        cout<<"display: "<<endl;
    }

};
int main()
{
    D d1;
    d1.displayA();
    return 0;

}