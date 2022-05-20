#include <iostream>
using namespace std;
void normal(int a)
{
    a=5;
    cout<< "the value of a is:"<<a<<endl;
}
void refer(int b)
{
b=9;
cout<<"the value of b is:"<<b<<endl;
}
int main()
{
    int a=10;
    int b=20;
    normal(a);
    refer(b);
    cout<<"the value of a inside main is:"<<a<<endl;
    cout<<"the value of b inside main is:"<<b;
}