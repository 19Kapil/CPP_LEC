#include<iostream>
#include<cmath>
using namespace std;
class Polar
{   
    protected:
    float r ,angle;
    public:
    Polar()
    {
        r = 0;
        angle = 0;
    }
    void getData()
    {
        cout<<"Enter the coordinates in polar form "<<endl;
        cout<<"r :";
        cin>>r;
        cout<<"angle :";
        cin>>angle;
    }
    float return_radius()
    {
        return r;
    }
    float return_angle()
    {
        return (angle* 3.14/180);
    }

};
class Rectangular
{
  public :
  float x ,y;
  Rectangular()
  {
    x = 0;
    y = 0;
  }
  void showData()
  {
    cout<<"Coordinate is ("<<x<<" , "<<y<<")"<<endl;
  }
   Rectangular(Polar p)
    { 
      
      x = p.return_radius() * cos(p.return_angle());
      y = p.return_radius() * sin(p.return_angle());

    }
};
<<<<<<< HEAD
=======

>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
int main ()
{
    Polar pol;
    Rectangular rect;
    pol.getData();
    rect = pol ;
    rect.showData();
<<<<<<< HEAD
}
=======
}
>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
