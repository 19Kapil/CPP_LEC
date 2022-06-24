#include <iostream>
using namespace std;
class complex {
    private:
    float real;
    float img;
    public:
    complex(){
        real=0;
        img=0;
    }
    void input()
    {
        cin>>real;
        cin>>img;
    }
    complex operator + (complex c2)
    {
        complex temp;
        //cout<<"the value of real and img is: "<<real<<img<<endl;
        temp.real = real + c2.real;
        temp.img = img  +c2.img;
         return temp;
    }
    void print()
    {
        cout << "Output Complex number: "<< real<<"+"<< img<<"i" <<endl;
    }

};
int main()
{
    complex c1, c2, result;
    cout<<"enter the real and imaginary part of complex numbers: "<<endl;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input(); 
    result = c1 + c2;
    result.print();

    return 0;
    
     }




























