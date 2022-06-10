//WAP to define a class Time that has 3 data members for hours, minutes and second.

#include<iostream>
using namespace std;

class Time{
    private:
        int hour,minute,second;
    public:
        void gettime(){
            cout<<"Enter time: "<<endl;
            cout<<"\nEnter the hour: ";
            cin>>hour;
            cout<<"\nEnter minute: ";
            cin>>minute;
            cout<<"\nEnter second: ";
            cin>>second;
        }
        void sum(Time one, Time two){
            this -> second = one.second+two.second;
            this -> hour = one.hour+two.hour+(this -> minute/60);
            this -> minute = one.minute+two.minute+(this -> second/60);
            this->minute %=60;
            this->second %=60;
        }
        void display(){
            cout<<"The resultant time is: "<<hour<<":"<<minute<<":"<<second<<endl;
        }
};

int main(){
    Time t1,t2,add;
    t1.gettime();
    t2.gettime();
    add.sum(t1,t2);
    add.display();
}