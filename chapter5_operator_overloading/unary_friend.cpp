#include <iostream>
using namespace std;
class UnaryFriend{
    int a= 10, b=15, c=12;
    
    public:
    void showdata(){
        cout<<a<< " "<<b<<" "<<c<<endl;
    }
    void friend operator -(UnaryFriend &u1);
};
void operator -(UnaryFriend &u1){
    u1.a = -u1.a;
    u1.b = -u1.b;
    u1.c = -u1.c;
}
int main(){
    UnaryFriend f1;
    cout<<"before overloading: ";
    f1.showdata();
    cout<<"after overloading: ";
    -f1;
    f1.showdata();
    return 0;
}