#include<iostream>
#include<cmath>
using namespace std;
class Rectangular
{
  public :
  float x ,y;
  Rectangular()
  {
    x = 0;
    y = 0;
  }
  Rectangular(float a,float b)
  {
    x = a;
    y = b;
  }

  void showData()
  {
    cout<<"Coordinate is ("<<x<<" , "<<y<<")"<<endl;
  }
   
};
class Polar
{   
    protected:
    float r ,angle,radian;
    public:
    Polar()
    {
        r = 0;
        radian = 0;
        angle = 0;
    }
    void getData()
    {
        cout<<"Enter the coordinates in polar form "<<endl;
        cout<<"r :";
        cin>>r;
        cout<<"angle :";
        cin>>radian;
        angle = (radian * 3.14/180);
    }
    operator Rectangular()
    {
        float a =static_cast<float>(r*cos(angle));
        float b =static_cast<float>(r*sin(angle));
        return Rectangular(a,b);
    }

};

int main ()
{
    Polar pol;
    Rectangular rect;
    pol.getData();
    rect = pol ;
    rect.showData();
}