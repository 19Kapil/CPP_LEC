#include<iostream>
using namespace std;
class celsius{
    private:
    float temp;
    public:
    celsius(){
        temp = 0;
    }
    celsius(float ftemp){
        temp = (ftemp-32)*5/9;
         }
         void showdata() 
         {
           cout<<"the temperature in celsius is: "<<temp;
         }

};
int main()
{
    celsius c;
    float ftemp;
    int age;
    cout<<"The temperature in fahrenheit: "<<endl;
    cin>>ftemp;
    c= ftemp;
    c.showdata();
}