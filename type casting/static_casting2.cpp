#include<iostream>
using namespace std;
int main()
{
    char c= 'k';

    int i;
    i = c;
    cout<<"the value of character is: "<<c<<endl;
    cout<<"THe value of converted integer: "<<i<<endl;
    i = static_cast<int>(c);
    cout<<"the value of integer is : "<<i;
}