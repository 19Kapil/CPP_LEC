#include<iostream>
using namespace std;
class Shape 
{   
    protected:
    float breadth , height ;
    public:
    void getData()
    {
        cout<<"Enter breadth :"<<endl;
        cin>>breadth;
        cout<<"Enter height  :"<<endl;
        cin>>height;
    }
    virtual void displayArea() = 0;
    
};
class Triangle : public Shape
{
    public :
    void getData()
    {
        cout<<"Enter dimensions of triangle :"<<endl;
        Shape::getData();
    }
    void displayArea()
    {
      cout<<"The area of triangle is "<<0.5*height*breadth<<endl;
    }
};
class rectangle : public Shape
{
    public :
    void getData()
    {
        cout<<"Enter dimensions of rectangle :"<<endl;
        Shape::getData();
    }
    void displayArea()
    {
      cout<<"The area of rectangle is "<<height*breadth<<endl;
    }
};
<<<<<<< HEAD
=======

>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
int main()
{
    Triangle t;
    rectangle r;
    t.getData();
    t.displayArea();
    r.getData();
    r.displayArea();
<<<<<<< HEAD
}
=======
}
>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
