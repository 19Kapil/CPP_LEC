#include<iostream>
using namespace std;

void IOS_width(){
    cout<<"-----------------------------------\n";
    cout<<"Implementing ios::width\n";

    char c = 'A';

    cout.width(5);
    cout<<c<<"\n";

    int temp = 10;
    cout.width(11);
    cout<<temp;
    cout<<"\n-------------------------------------";
}

void IOS_precision(){
    cout<<"\n--------------------------------------\n";
    cout<<"Implementing ios::precision\n\n";

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout<<3.1422;
    cout<<"\n-------------------------------------\n";
}

void IOS_fill(){
    cout<<"\n-------------------------------------\n";
    cout<<"Implemention ios::fill\n\n";
    char ch='a';

    cout.fill('*');

    cout.width(10);
    cout<<ch<<"\n";

    int i=1;

    cout.width(5);
    cout<<1;
    cout<<"\n--------------------------------------\n";
}

int main(){
    IOS_width();
    IOS_precision();
    IOS_fill();
    return 0;
}