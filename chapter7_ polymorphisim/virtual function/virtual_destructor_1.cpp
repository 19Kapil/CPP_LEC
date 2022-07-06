#include <iostream>
using namespace std;
 
class Base{
public:
  Base(){
    cout << "Base Constructor \n";
  }
    void display()
  {
cout <<"virtual display: "<<endl;
  }
 
  virtual ~Base()
  {
    cout << "Base Destructor \n";
  }
  
};
 
class Derived: public Base{
public:
  Derived(){
    cout << "Derived Constructor \n";
   }

 
  ~Derived(){
    cout << "Derived Destructor \n";
  }
};
 
int main() {
 Base *obj; 
 obj= new Derived();  //Derived object with base pointer
 obj->display();
 delete(obj);                //Deleting object
 return 0;
}