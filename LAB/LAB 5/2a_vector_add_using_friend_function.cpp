#include<iostream>
using namespace std;
class Vector
{
    private:
    float x,y,z;
    public:
    Vector()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    void getData()
    {
     cout<<"Enter the vector components"<<endl;
     cout<<"Enter the x component"<<endl; 
     cin>>x;
     cout<<"Enter the y component"<<endl; 
     cin>>y;
     cout<<"Enter the z component"<<endl; 
     cin>>z;
    }
    Vector operator + (Vector a )
    {   
       Vector sum;
       sum.x = x + a.x;
       sum.y = y + a.y;
       sum.z = z + a.z;
       return sum;
    }
    void showData()
    {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k "<<endl;
    }
};
<<<<<<< HEAD
=======

>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
int main()
{
Vector a,b,c;
a.getData();
b.getData();
c = a + b;
cout<<" The Sum is ";
c.showData();
<<<<<<< HEAD
}
=======
}
>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
