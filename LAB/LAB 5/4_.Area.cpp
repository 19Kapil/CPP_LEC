#include<iostream>
#include<math.h>
using namespace std ;
class area {
    public :
void calculateArea (float a,float b,float c){
    float s , area ;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area<<endl;   
}
void calculateArea (float length)
{
    cout<<"The area of square is "<<length*length<<endl;
}
void calculateArea (float length , float breadth)
{
    cout<<"The area of rectangle is "<<length*breadth<<endl;
}
};
<<<<<<< HEAD
=======

>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
int main ()
{   
    area a;
   a.calculateArea(5,6,7);
   a.calculateArea(5,6);
   a.calculateArea(5);
<<<<<<< HEAD
}
=======
}
>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
