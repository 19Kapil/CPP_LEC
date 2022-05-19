#include <iostream>
using namespace std;
int sum(int a,int b,int c)
{
    return a+b+c;
}
int sum (int z=5,int y=4)
{
    return z+y;
}
int main()
{
   cout<<sum (1,2,3)<<endl;
   cout<<sum(9);
}