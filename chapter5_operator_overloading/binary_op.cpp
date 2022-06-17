#include <iostream>
using namespace std;
class binary {
    private:
    int a;
    int b;
    public:
    binary(){
        a=0;
        b=0;
    }
    binary (int x,int y){
          a=x;
          b=y;
    }
    binary operator + (binary bin){

    binary b2;
    cout<<" the value of b2 inside overloading function: "<<b2.a<<endl;
    cout<<" the value of b2 inside overloading function: "<<b2.b<<endl;
    cout<<" the value of b2 inside overloading function: "<<bin.a<<endl;
    cout<<" the value of b2 inside overloading function: "<<bin.b<<endl;
    b2.a= a+ bin.a;
    b2.b=b+ bin.b;
   return b2;
    } 
    void display()
    {
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};

int main(){
    binary bb1,bb2,bb3;
    bb1=binary(10,20);
    bb2=binary(30,40);
    bb3=bb1+bb2;
    bb1.display();
    bb2.display();
    bb3.display();
    return 0;
}
