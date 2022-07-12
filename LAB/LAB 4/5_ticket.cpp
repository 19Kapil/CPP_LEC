#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Person 
{
    protected:
    char name[30];
    int age ;
    public:
    Person()
    {
        cout<<"Enter your name :"<<endl;
        cin>>name;
        cout<<"Enter your age :"<<endl;
        cin>>age;
    }
    void showData()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Reservation 
{   
    Person p;
    protected:
    int Rid ;
    char Rdate[30];
    public:
    Reservation()
    {   
        srand(time(0));
        Rid = rand();
        cout<<"Enter date for reservation :"<<endl;
        cin >> Rdate;
    }
    void showData()
    {   
        cout<<"--------Your reservation is successful--------"<<endl;
        p.showData();
        cout<<"Date of reservation:"<<Rdate<<endl;
        cout<<"Rid :"<<Rid<<endl;
    }
};
int main(){
Reservation r1;
r1.showData();
}