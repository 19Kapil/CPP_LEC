// WAP to compute the area of a traingle using user defined function(no arguements and no return type)

#include<iostream>
#include<cmath>
using namespace std;

void Area(){
    float side1, side2, side3, s, area;
    cout<<"Enter the value of side1: "<<endl;
    cin>>side1;
    cout<<"Enter the value of side2: "<<endl;
    cin>>side2;
    cout<<"Enter the value of side3: "<<endl;
    cin>>side3;
    s = (side1+side2+side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"Area of the triangle is: "<<area<<endl;
}

int main(){
    Area();
}