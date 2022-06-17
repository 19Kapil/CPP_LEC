
//after overloading an operator it can be applied to an object in the same way as it is basic types.

#include <iostream>
using namespace std;
class count{
    private:
    int value;
    public:
    count()
    {
        value =9;
    }
    void operator ++(int) {
        ++value;
    }
    void display(){
     cout<<"count is: "<<value<<endl;
    }
};
int main(){
    count c1;
    c1++;
    c1.display();
    return 0;
}
