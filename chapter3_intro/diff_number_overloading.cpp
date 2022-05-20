#include <iostream>
using namespace std;
double sum(int x,double y)
{
return x+y;
}
int sum(int a=3,int b=6)
{
    return a+b;
}
int main()
{
    cout<<sum(1,5.3)<<endl;
    cout<<sum();
}