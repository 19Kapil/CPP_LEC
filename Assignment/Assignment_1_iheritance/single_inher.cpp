//an example of single inheritance 
#include <iostream>
using namespace std;
class student
{
    private:
    char name[25];
    int studID;
    public:
    void getdata()
    {
        cout<<"\n Enter name: ";
        cin>>name;
        cout<<"Enter student ID: ";
        cin>>studID;
    }
    void showdata()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n student: "<<studID;
    }   
};
class leader : public student 
{
    private:
    char union_name[25];
    public:
    void getdata()
    {
        student::getdata();
        cout<<"enter name of associated student of union: ";
        cin>>union_name;      
    }
    void showdata(){
        student:: showdata();
        cout<<"/n name of associated student union: "<<union_name;

    }
};
int main(){
    leader led;
    cout<<"Enter data on leader of student union"<<endl;
    led.getdata();
    cout<<"/n Data on leader of student union"<<endl;
    led.showdata();
    return 0;
}