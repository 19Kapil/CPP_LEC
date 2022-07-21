#include<iostream>
using namespace std;
 int main ()
 {
    int i = 100;
    cout<<" the address of the value of integer is: "<<&i<<endl;
    int *p;
    int ivar;
    double dvar;
    int*pivar;
    double*pdvar;
    void *pvoid;
     
 pivar = reinterpret_cast<int *>(&dvar);
 pivar = reinterpret_cast<int*>(ivar);
 }
