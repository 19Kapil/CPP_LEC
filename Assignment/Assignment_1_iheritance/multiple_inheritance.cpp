//an example of multiple inheritance
#include <iostream>
using namespace std;
class student{
    private:
    char name[25];
    int studID;
    public:
    void getdata(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter student id: ";
        cin >>studID;
    }
    void showdata()
{
cout<<"/nName: "<<name;
cout<<"/nstudent ID: "<<studID;
}
};
class employee
{
    private:
    char org_name;
    int empID;
    public:
    void getdata(){
        cout<<"enter name of associated organization: ";
        cin>>org_name;
        cout<<"enter the employee ID: "<<endl;
        cin>>empID;
    }
    void showdata(){
        cout<<"/nName of asssociated organization: "<<org_name;
        cout<<"/nemplyoeeID: "<<empID;

    }

};
class marketing_officer : public student, public employee
{
    private:
    int working_hour;
    public:
    void getdata()
    {
    student::getdata();
    employee::getdata();
    cout<<"enter the working hour: "<<endl;
    cin>>working_hour;
  }
  void showdata(){
    student::showdata();
    employee::showdata();
    cout<<"/n working hour: "<<working_hour;
  }
    };
    int main(){
        marketing_officer moff;
        cout<<"enter data of marketing officer"<<endl;
        moff.getdata();
        cout<<"Data of marketing officer"<<endl;
        return 0;
    }
