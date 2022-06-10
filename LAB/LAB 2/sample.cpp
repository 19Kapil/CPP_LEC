//5.	WAP to create a class Sample with 2 float data members and member functions void getdata() to input the values and one friend function float mean(Sample) to calculate and return mean value.
//Sample
//value1
//value2
//getdata()
//mean(Sample)


#include<iostream>
using namespace std;

class Sample
{
    friend float mean(Sample);
    private:
    double value1;
    double value2;

    public:
    void getData()
    {
        cout<<"Enter value1 :";
        cin>>value1;
        cout<<"Enter value2 :";
        cin>>value2;
    }
};

float mean (Sample s)
{
    float mean;
    mean=(s.value1+s.value2)/2;
    return mean;
}

int main()
{
    Sample s1;
    s1.getData();
    cout<<"The mean value is "<<mean(s1);
    return 0;
}
