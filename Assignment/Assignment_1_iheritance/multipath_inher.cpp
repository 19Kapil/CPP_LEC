//an example of multi path inheritance.
#include<iostream>
using namespace std;

class student{
    protected:
        int studID;
        char name[25];
    public:
        void getstdata(){
            cout<<"\n Enter student Id: ";
            cin>>studID;
            cout<<"\n Enter Name: ";
            cin>>name;
        }
        void showstdata(){
            cout<<"\n Student ID: "<<studID;
            cout<<"\n Name: "<<name;
        }
};

class InternalExam: virtual public student{
    protected:
        int marks1,marks2,marks3;
    public:
        void getdata(){
            cout<<"\n Enter internal marks in three subjects: ";
            cin>>marks1>>marks2>>marks3;
        }
        void showdata(){
            cout<<"\n Internal marks in subject 1: "<<marks1;
            cout<<"\n Internal marks in subject 2: "<<marks2;
            cout<<"\n Internal marks in subject 3: "<<marks3;
        }
        int totalInternalMarks(){
            return (marks1+marks2+marks3);
        }
};

class ExternalExam: virtual public student{
    protected:
        int marks1,marks2,marks3;
    public:
        void getdata(){
            cout<<"\n Enter external marks in three subjects: ";
            cin>>marks1>>marks2>>marks3;
        }
        void showdata(){
            cout<<"\n External marks in subject 1: "<<marks1;
            cout<<"\n External marks in subject 2: "<<marks2;
            cout<<"\n External marks in subject 3: "<<marks3;
        }
        int totalExternalMarks(){
            return (marks1+marks2+marks3);
        }
};

class result: public InternalExam,public ExternalExam{
    public:
        void getdata(){
            InternalExam::getdata();
            ExternalExam::getdata();
        }
        void showdata(){
            InternalExam::showdata();
            ExternalExam::showdata();
        }
        int TotalMarks(){
            return (totalExternalMarks()+totalInternalMarks());
        }
};

int main(){
    result r;
    cout<<"\n Enter data for student: "<<endl;
    r.getstdata();
    cout<<"\n Enter marks: "<<endl;
    r.getdata();
    cout<<"\n Data for the student is : "<<endl;
    r.showdata();
    cout<<"\n Total Marks: "<<r.TotalMarks();
    return 0;
}