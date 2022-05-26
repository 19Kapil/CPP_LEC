#include<iostream>
using namespace std;

class construct{
 public:
    int a,b;
    construct()
{
    cout<<"constructor is called:";
    a=10;
    b=20;
}
void display(){
    cout<<"kapil";
}
};

int main()
{
construct c;
c.display();
cout <<"value is : "<<c.a<<" "<<c.b;
return 0;
}
