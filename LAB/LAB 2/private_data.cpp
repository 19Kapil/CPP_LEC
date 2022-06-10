//6.	WAP to add 2 private data of two different classes.
//[hint: use friend function] 


#include<iostream>
using namespace std;

class Class2;

class Class1{
    private:
        int num1;
    public:
        friend int add(Class1 x,Class2 y);
        Class1(){
            num1 = 7;
        }
};

class Class2{
    private:
        int num2;
    public:
        friend int add(Class1 x,Class2 y);
        Class2(){
            num2 = 12;
        }
};

int add(Class1 x,Class2 y){
    return x.num1+y.num2;
}

int main(){
    Class1 obj1;
    Class2 obj2;
    int sum = add(obj1,obj2);
    cout<<" sum of the two private data is: "<<sum<<endl;
    return 0;
}

