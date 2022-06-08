//4.	WAP to add two complex numbers passing object as an argument and returning resultant complex number
#include <iostream>
using namespace std;
class complex{
    private:
    double real;
     double imaginary;
     public:
     void input (){
         cout <<"enter the real part of num1 and num2 : ";
         cin>>real;
         cout<<"enter the imaginary part of num1 and num2: ";
         cin>>imaginary;
     }
      void rsum (double  complex n1 , double complex n2){
          double  n1 , n2;
          double realSum= n1.real + n2.real;
          double imaginarySum = n1.imaginary + n2.imaginary;
      }






};
int main (){
    complex num1,num2;
    num1.input();
    num2.input();
    cout<<"the sum of two complex no. is : "<sum(num1,num2)<<"+i"<sum(num1,num2)<<endl;



    return 0;
}