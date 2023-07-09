#include <iostream>
using namespace std;
int main()
{
    int i;
    float f = 3.124568; 
    i = f;
    cout<<"the value of float is: "<<f<<endl;
    cout<<"THe value of converted integer:"<<i<<endl;
    i = static_cast<int>(f);
    cout<<"the value of integer is : "<<i;
}
