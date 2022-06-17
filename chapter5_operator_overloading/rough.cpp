#include<iostream>
using namespace std;
class rough{
    public:
    int a=19;
    
};
int main (){
rough r1;
cout<<"primitive type increment"<<r1.a++;
cout<<"user defined  type increment"<<r1.a++;
return 0;
}
