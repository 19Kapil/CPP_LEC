// WAP to compute the area of a traingle using user defined function(arguements and return type)

#include<iostream>
#include<cmath>
using namespace std;

int Area(int  side1, int  side2, int  side3, int s){
    int  area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return area;
}

int main(){
    float side1, side2, side3, s, area;
    cout<<"Enter the value of side1: "<<endl;
    cin>>side1;
    cout<<"Enter the value of side2: "<<endl;
    cin>>side2;
    cout<<"Enter the value of side3: "<<endl;
    cin>>side3;
    s = (side1+side2+side3)/2;
    cout<<"Area of triangle is : "<<Area(side1, side2, side3, s)<<endl;
}