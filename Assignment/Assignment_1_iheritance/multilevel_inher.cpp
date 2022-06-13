// an example of multilevel inheritance
#include<iostream>
using namespace std;

class person{
    private:
        char name[25];
        char address[25];
    public:
        void getdata(){
            cout<<"\n Enter Name: ";
            cin>>name;
            cout<<"\n Enter Address: ";
            cin>>address;
        }
        void showdata(){
            cout<<"\n Name: "<<name;
            cout<<"\n Address: "<<address;
        }
};

class employee: public person{
    private:
        int empId;
        float salary;
    public:
        void getdata(){
            person::getdata();
            cout<<"\n Enter employee Id: ";
            cin>>empId;
            cout<<"\n Enter salary: ";
            cin>>salary;
        }
        void showdata(){
            person::showdata();
            cout<<"\n Employee ID: "<<empId;
            cout<<"\n Salary: "<<salary;
        }
};

class manager: public employee{
    private:
        char hidegreee;
    public:
        void getdata(){
            employee::getdata();
            cout<<"\n Enter highest degree: ";
            cin>>hidegreee;
        }
        void showdata(){
            employee::showdata();
            cout<<"\n highest degree: "<<hidegreee;
        }
};

int main(){
    manager mgr;
    cout<<"\n Enter data on manager: ";
    mgr.getdata();
    cout<<"\n Data on manager: ";
    mgr.showdata();
    return 0;
}