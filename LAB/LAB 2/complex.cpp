//4.	WAP to add two complex numbers passing object as an argument and returning resultant complex number
#include <iostream>
using namespace std;
class complex{
    private:
    double real;
     double imaginary;
     public:
     void input (){
         cout <<"enter the real part: ";
         cin>>real;
         cout<<"enter the imaginary part: ";
         cin>>imaginary;
     }
      double rsum (complex n1 ,complex n2){
          double realSum;
           realSum= n1.real + n2.real;
           return realSum;

      }
      double  imgSum(complex n1, complex n2){
          double imaginarySum;
      imaginarySum = n1.imaginary + n2.imaginary;
      return imaginarySum;
      }

};
int main (){
    complex num1,num2,result;
    num1.input();
    num2.input();
    cout<<"the sum of two complex no. is : "<<result.rsum(num1,num2)<<"+i"<<result.imgSum(num1,num2)<<endl;
    return 0;
}