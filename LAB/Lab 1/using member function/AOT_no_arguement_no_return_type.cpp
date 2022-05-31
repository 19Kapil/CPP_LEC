// WAP to compute the area of a traingle using user defined function(no arguements and no return type)

#include<iostream>
#include<cmath>
using namespace std;

class area{
    private:
        int  s, side1, side2, side3, area;
    public:
        void input(){
            cout<<"Enter the value of  side1: "<<endl;
            cin>>side1;
            cout<<"Enter the value of side2: "<<endl;
            cin>>side2;
            cout<<"Enter the value of  side3: "<<endl;
            cin>>side3;
    }
        void Area(){        
            s = (side1+side2+side3)/2;
            area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
            cout<<" Area of the triangle is: "<<area<<endl;
        }
};

int main(){
    area a1;
    a1.input();
    a1.Area();
}