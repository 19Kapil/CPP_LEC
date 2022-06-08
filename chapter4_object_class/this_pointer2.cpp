#include <iostream>
using namespace std;
class Test{
    private:
    int x;
    public:
    void setx (int x){
        this->x = x;
    }
    void print(){
        cout<<"value of x is: "<<x<<endl;
        cout<<"address of the object that is calling x is "<<this<<endl;

    }
};
int main(){
    Test obj1,obj2;
    obj1.setx(20);
    obj1.print();
    obj2.setx(500);
    obj2.print();
    return 0;

}
