#include<iostream>
using namespace std;

// declare a class
class wall {
    private:
    double length;
    double height;

    public:
    wall ( double len, double hgt){

    // initialize private variables
    length = len;
    height= hgt;
    }

    // copy constructor with a wall object as parameter
    // syntax : classname( classname &objectname)

    wall( wall &obj) {
        // initailaize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea(){
        return length * height;
    }
    };

int main()
{
    // create object of wall class
    wall wall1(14,10);

    // print area of wall
    cout<<"area_of_wall"<<wall1.calculateArea()<<endl;

    // COPY CONTENTS OF WALL TO ANOTHER OBJEVCT WALL
    // wall is object of class wall whose value is being copied to another object

    wall wall2 = wall1;
    // print are of wall
    cout<<"Area of wall : "<<wall2.calculateArea()<<endl;

return 0;
}