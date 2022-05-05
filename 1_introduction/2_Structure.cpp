// q.WAP in c++ to read the record of student (name,adress,roll no.)and display using structure.

#include <iostream>
 using namespace std; 

struct student {
    char name[50];
    char address[50];
    int roll;
};
int main ()
{
       student k;
    cout << "Enter the name of student:";
    cin >> k.name;
    cout << "Enter the address of student:";
    cin  >> k.address;
    cout << "Enter the roll of student:";
    cin >> k.roll;

    cout << "Name:" <<k.name;
    cout << "Address:" <<k.address;
    cout << "roll:" <<k.roll;
    return 0;
}