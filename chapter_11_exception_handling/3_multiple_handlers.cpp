#include <iostream>
#define MAX 3
using namespace std;
 class stack
 {
    protected:
    int s [MAX];
    int top;
    public:
    class FULL{};
    class EMPTY{};

    stack(){
        top = -1;

    }
    void push(int x){
        if (top==MAX-1)
           {
            throw FULL();
            }
            else
            {
            s[++top] = x;
            }
    }
    int pop(){
            if(top==-1)
            {
                throw EMPTY();
            }
            else
            {
                return s[top--];
            }
        }


 };
 int main()
 {
    stack s;
    try{
        s.push(11);
        s.push(22);
        s.push(33);

        cout<<"Number Popped: "<<s.pop()<<endl;
        cout<<"NUmber Pooped: "<<s.pop()<<endl;
        cout<<"Number Pooped: "<<s.pop()<<endl;

 }
 catch(stack::FULL){
    cout<<"Expection: stack is full"<<endl;

 }
catch(stack::EMPTY)
{
    cout<<"Expection: stack is empty"<<endl;

}
return 0;
 }