#include<iostream>
using namespace std;

class A{
    private:
        int pvtdataA;
    protected:
        int protdataA;
    public:
        int pubdataA;
};

class B: public A{
    public:
        void func(){
            int a;
            a = pvtdataA; //error: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

class C: protected A{  //protectedly derived
    public:
        void func(){
            int a;
            a = pvtdataA; //eror: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

class D: private A{  //privately derived
    public:
        void func(){
            int a;
            a = pvtdataA; //error: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

int main(){
    int num;
    B objB;
    num = objB.pubdataA; //pubdata is public to B
    num = objB.pvtdataA; //error: not accessible
    num = objB.protdataA;//error: not accessible

    C objC;
    num = objC.pubdataA;//error: not accessible
    num = objC.pvtdataA;//error: not accessible
    num = objC.protdataA;//error: not accessible

    D objD;
    num = objD.pubdataA;//error: not accessible
    num = objD.pvtdataA;//error: not accessible
    num = objD.protdataA;//error: not accessible

    return 0;
}