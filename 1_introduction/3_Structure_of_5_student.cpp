// q. WAP in C++ to read the record of five students. Include their name, adress and roll.no and display them using structure

#include <iostream>

using namespace std;

struct student
{
    char name[10];
    char address[15];
    char roll[15];
} k[5];

int main()
{
    cout << "Enter the information of students: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << "Enter name: ";
        cin >> k[i].name;
        cout << "Enter address: ";
        cin >> k[i].address;
        cout << "Enter Roll No : ";
        cin >> k[i].roll;
    }
    cout << "Output" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << "Name: " << k[i].name;
        cout << "\n Address: " << k[i].address;
        cout << "\n Roll No: " << k[i].roll;
    }
    return 0;
}