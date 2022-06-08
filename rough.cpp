#include <iostream>
 using namespace std;
class interest{
     private:
    float principle;
    int time;
    float rate;
public:
void simple_interest(float p,int t){
   principle = p;
    time = t;
   float simple_interest=(p*t*0.15)/100;

    cout<<"The required simple interest of given amount is :"<<simple_interest<<endl;
}
};
 int main (){
     interest amount1;
amount1.simple_interest(45000,5);
 return 0; 
 }