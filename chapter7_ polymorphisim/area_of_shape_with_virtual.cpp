#include <iostream>
using namespace std;
class shape{
    protected:
    int width;
    int breadth;
     public:
     shape(int a=0,int b=0){
      width = a;
      breadth = b;
     }
     void virtual print(){
        int area;
        cout<<"shape area is: "<<area <<endl;
     }
};
 class rectangle :public shape {
protected:
    int width,breadth;
    public:
    rectangle(int a,int b){
        width=a;
        breadth = b;
 }
 void virtual print(){
    cout<<"area of rectangle is: "<<(width*breadth)<<endl;
 }
 };
 class triangle: public shape {
    protected:
    int width,breadth;
    public:
    triangle(int a, int b){
    width=a;
    breadth=b;
     }
     void virtual print(){
        cout<<"area of triangle is: "<<width*breadth/2<<endl;
     }

 };
 int main(){
shape *shape;
rectangle rec(10,15);
triangle tri(4,5);
shape = &rec;
shape-> print();

shape = &tri;
shape->print();
return 0;
}
 








 
