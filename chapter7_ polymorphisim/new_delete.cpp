#include <iostream>
using namespace std;

int main(){
    int *pointint;
    float *pointfloat;

    //dynamically allocating memory
    pointint = new int;
    pointfloat = new float;

    cout<<"Address assigned to pointint is: "<<pointint<<endl;
    cout<<"Address assigned to pointfloat is: "<<pointfloat<<endl;

    //assigning value to the memory
    *pointint = 45;
    *pointfloat = 45.45;

    cout<<"Value assigned to pointint is: "<<*pointint<<endl;
    cout<<"Value assigned to pointfloat is: "<<*pointfloat<<endl;

    //deallocating the memory
    delete pointint;
    delete pointfloat;
}