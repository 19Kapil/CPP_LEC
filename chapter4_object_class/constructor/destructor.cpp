#include <iostream>
using namespace std;
class Helloworld{
public:
Helloworld(){
    cout<<"constructor is called:"<<endl;
}
~Helloworld(){
    cout<<"destructor is called:"<<endl;
}
void display(){
    cout<<"Hello world!"<<endl;
}
};
 int main(){
     Helloworld obj;
     obj.display();
     }
