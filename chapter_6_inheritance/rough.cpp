#include <iostream>
using namespace std;
class A{
public:
int x;
int y;
int addn;
void add(){
    addn= x+y;
    cout<<"ADD: "<<addn<<endl;
}
};
int main(){
    A a1,a2,a3;
    a3.add(a1,a2);
    return 0;
}
