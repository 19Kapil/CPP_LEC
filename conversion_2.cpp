#include<iostream>
using namespace std;
    class celsius{
    private:
    float temp;
    public:
    celsius(){
        temp = 0;
    }
    operator float()
    {
        float ftemp;
        ftemp = temp *9/5 + 32;
        return ftemp;

    }
    void getdata(){
        cout<<"The temperature in celsius : ";
        cin>>temp;
    }

};
int main()
{
    celsius c;
    float ftemp;
    c.getdata();
    ftemp=c;
    cout<<"The temperature in fahrenheit: "<<ftemp<<endl;
    
    }

