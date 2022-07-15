//WAP to read the name , roll no and marks that catch multipe exception.using exception class if roll ni is negative.

#include<iostream>
using namespace std;
class student
{
    public:
    char Name[30];
    int roll;
    float marks;
    public:
    class roll_error{

    };
    class marks_error{

    };
void getdata()
{
cout<<"Enter a name of student: "<<endl;
cin>>Name;
cout<<"Enter roll no. of students: "<<endl;
cin>>roll;
cout<<"enter marks of student: "<<endl;
cin>>marks;
if(roll<1)
{
   throw roll_error(); 
   
}
if(marks>100)
{
    throw marks_error();
}
}
void showdata(){
    cout<<"Name: "<<Name<<endl;
    cout<<"roll no: "<<roll<<endl;
    cout<<"Marks: "<<marks<<endl;  
}
};
int main()
{
    student s;
    try
    {
        s.getdata();
        s.showdata();
     }
     catch(student:: roll_error)
     {
        cout<<"Error! roll no. cannot be in negative"<<endl;
     }
     catch(student:: marks_error)
     {
        cout<<"Error! marks cannot be more than 100"<<endl;
     }
     return 0;
}
