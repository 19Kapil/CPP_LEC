//WAP to calculate area and volume of room.
#include <iostream>
using namespace std;

class room
{
  private:
  int length;
  int breadth;
  int height;


public:
void setValues(int a,int b,int c){
    length=a;
    breadth=b;
    height=c;
}
  int calculateArea()
  {
      return length * breadth;
  }


int calculateVolume()
{
    return length * breadth * height;
}
};

int main() {
    room room1;
    room1.setValues(10,20,15);
    room1.calculateArea();
    room1.calculateVolume();

    cout<<"The area of room is:" <<room1.calculateArea()<<endl;
    cout<<"The volume of room is:"<<room1.calculateVolume()<<endl;
}