#include <iostream>
using namespace std;

struct student {
    char name[30];
    int roll;
    char address[30];
    

    student Info()
    {
    struct student s1;
    cout<<"Enter name of  student: "<<endl;
    cin>>s1.name;
    cout<<"Enter  roll no of student: "<<endl;
    cin>>s1.roll;
    cout<<"Enter address of student: "<<endl;
    cin>>s1.address;
    return s1;
    }
    
    void display(student s2){
    cout<<"Name = "<<s2.name<<endl;
    cout<<"Roll no = "<<s2.roll<<endl;
    cout<<"Address = "<<s2.address;

    }
};
int main()
{
    student s;
    s = s.Info();
    s.display(s);
}
