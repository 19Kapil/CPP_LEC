#include<iostream>
using namespace std;
int main()
{
    char c, data[25];
    cout<<"Enter a character:";
    cin.get(c);
    cin.get(data, 10);
    cout<<"The entered character is ";
    cout.put(c);
    cout<<data;
    return 0;
}
