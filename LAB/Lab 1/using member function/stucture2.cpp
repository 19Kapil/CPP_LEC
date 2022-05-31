#include<iostream>
using namespace std;

class studentRecord{
    private:
        struct student
            {
                 char name[50];
                char address[50];
                int roll;
            }k;

    public:
        void input(){
            cout<<"Enter the name of student: ";
            cin>>k.name;
            cout<<"\nEnter the address of studen: ";
            cin>>k.address;
            cout<<"\nEnter the roll of studen: ";
            cin>>k.roll;
        }

        void display(){
            cout<<"Name = "<<k.name<<endl;
            cout<<"Address = "<<k.address<<endl;
            cout<<"Roll = "<<k.roll<<endl;
    

        }
};

int main(){
    studentRecord s1;
    s1.input();
    s1.display();
    return 0;
}