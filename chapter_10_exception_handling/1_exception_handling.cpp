#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter values of a and b: "<<endl;
    cin>>a>>b;
    int x = a / (a-b);
    cout<<"the value of x is  : "<<x<<endl;
    return 0;
}