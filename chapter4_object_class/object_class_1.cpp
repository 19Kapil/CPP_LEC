//WAP to calculate area and volume of room.
#include <iostream>
using namespace std;

class room
{
  public:
  int length;
  int breadth;
  int height;

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
    room1.length = 10;
    room1.breadth = 20;
    room1.height = 15;
    room1.calculateArea();
    room1.calculateVolume();

    cout<<"The area of room is:" <<room1.calculateArea()<<endl;
    cout<<"The volume of room is:"<<room1.calculateVolume()<<endl;
}