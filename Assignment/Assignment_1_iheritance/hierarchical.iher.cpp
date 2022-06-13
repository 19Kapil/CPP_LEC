// an example of hierarachical inheritance
#include<iostream>
using namespace std;

class employee{
    private:
        char name[25];
        int empID;
        float salary;
    public:
        void getdata(){
            cout<<"\n Enter Name: ";
            cin>>name;
            cout<<"\n Enter Employee ID: ";
            cin>>empID;
            cout<<"\n Enter Salary: ";
            cin>>salary;
        }
        void showdata(){
            cout<<"\n Name: "<<name;
            cout<<"\n Employee ID: "<<empID;
            cout<<"\n Salary: "<<salary;
        }
};

class manager: public employee{
    private:
        char hidegree[6];
    public:
        void getdata(){
            employee::getdata();
            cout<<"\n Enter highest degree obtained: ";
            cin>>hidegree;
        }
        void showdata(){
            employee::showdata();
            cout<<"\n Highest Degree: "<<hidegree;
        }
};

class secretary: public employee{
    private:
        float height;
    public:
        void getdata(){
            employee::getdata();
            cout<<"\n Enter height: ";
            cin>>height;
        }
        void showdata(){
            employee::showdata();
            cout<<"\n Height: "<<height;
        }
};

class teacher: public employee{
    private:
        int npeiods;
    public:
        void getdata(){
            employee::getdata();
            cout<<"\n Enter the number of periods allocated: ";
            cin>>npeiods;
        }
        void showdata(){
            employee::showdata();
            cout<<"\n Number of periods allocated are: "<<npeiods;
        }
};

int main(){
    manager m;
    secretary s;
    teacher t;
    cout<<"\n Enter data on manager: ";
    m.getdata();
    cout<<"\n Enter data on secretary: ";
    s.getdata();
    cout<<"\n Enter data on teacher: ";
    t.getdata();
    cout<<"\n Data on manager: ";
    m.showdata();
    cout<<"\n Data on secretary: ";
    s.showdata();
    cout<<"\n Data on teacher: ";
    t.showdata();
    return 0;
}