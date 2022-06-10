#include <iostream>
using namespace std;
 class Animal{
    public:
    void eat()
    {
cout<<"eating......";
    }
 };
 class dog : public Animal
 {
    public:
    void bark(){
         cout<<"barking...";
    }
 };
 int main(){
dog d1;
d1.eat();
d1.bark();
 }


 

    
 
