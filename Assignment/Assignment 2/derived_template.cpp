#include <iostream>
using namespace std;
template <class T>
class base
{
    private:
    T data;
    public:
    base(T a) 
    {
        data = a;
    }
    void display()
    {
        cout<<"data: "<<data<<endl;
    }


};
class derived : public base <int>
{
    public:
    derived() {}
    derived (int a) : base <int> (a) {}
};
class derived1 : public base<int>
{
public:
    derived1() {}
    derived1(int a) : base<int>(a) {}
};
template <class T>
class derived2 : public base<int>
{
private:
    T data;

public:
    derived2(int a, T b) : base<int>(a), data(b) {}
    void display()
    {
        cout << "In base: ";
        base<int>:: display();
        cout << "In derived data: " << data << endl;
    }
};
template <class T>
class derived3 : public base<T>
{
public:
    derived3() {}
    derived3(T a) : base<T>(a) {}
};
template <class T1, class T2>
class derived4 : public base<T1>
{
private:
    T2 data;

public:
    derived4() {}
    derived4(T1 a, T2 b) : base<T1>(a), data(b) {}
    void display()
    {
        cout << "in base: ";
        base<T1>:: display();
        cout << "in derived data: " << data << endl;
    }
};
class base2
{
private:
    int data;

public:
    base2() {}
    base2(int d) { data = d; }
    void display()
    {
        cout << "data: " << data << endl;
    }
};
template <class T>
class derived5 : public base2
{
private:
    T data;

public:
    derived5() {}
    derived5(int a, T b) : base2(a), data(b) {}
    void display()
    {
        cout << "in base: ";
        base2::display();
        cout << "in derived data: " << data << endl;
    }
};
int main()
{
    derived1 obj1(5);
    obj1.display();
    derived2<float> ob2(10, 12.34);
    ob2.display();
    derived3<int> ob3(15);
    ob3.display();
    derived4<int, float> ob4(4, 3.7);
    ob4.display();
    derived5<float> ob5(25, 9.7);
    ob5.display();
}