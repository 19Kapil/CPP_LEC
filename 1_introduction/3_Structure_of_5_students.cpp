// q.WAP in c++ to read the record of students (name,adress,roll no.)and display using structure.
#include<iostream>
using namespace std; 

struct student {
    char name[50];
    char address[50];
    int roll; 
};
int main()

{ 
    student k[5];
    int i;
    // Entering the record of students.
for (i=0;i<5;++i)
    {
     cout<<"\nEntering the records:"<<endl;
    cout << "\nEnter the name of student:";
    cin >> k[i].name;
    cout << "\nEnter the address of student:";
    cin  >> k[i].address;
    cout << "\nEnter the roll of student:";
    cin >> k[i].roll;
    }

// Displaying the record of students:
    for (i=0;i<5;++i)
    {
     cout << "\nDisplaying the records:"<<endl;
    cout << "Name:\t" <<k[i].name<<endl;
    cout << "Address:\t" <<k[i].address<<endl;
    cout << "roll:\t" <<k[i].roll<<endl;
    }
    return 0;
}