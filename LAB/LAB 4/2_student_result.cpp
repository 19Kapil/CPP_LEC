#include<iostream>
using namespace std;
class Student 
{
    protected:
    char name[30];
    int roll;
    public:
    void getData()
    {
        cout<<"Enter the name of the student :"<<endl;
        cin>>name;
        cout<<"Enter the roll no :"<<endl;
        cin>>roll;
    }
    void showData()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
    }
};
class Test : public Student 
{   
    protected:
    float Math;
    float Eng;
    public :
     void getData()
    {   
        Student::getData();
        cout<<"Enter the marks in maths :"<<endl;
        cin>>Math;
        cout<<"Enter the marks in english :"<<endl;
        cin>>Eng;
    }
    void showData ()
    {   
        Student::showData();
        cout<<"Maths :"<<Math<<endl;
        cout<<"English :"<<Eng<<endl;
    }
};
class Sport 
{   
    protected:
    float Score;
    public :
     void getData()
    {   
        cout<<"Enter the score in Sports :"<<endl;
        cin>>Score;
    }
    void showData ()
    {   
        cout<<"Sports :"<<Score<<endl;
    }
};
class Result :public Test ,Sport 
{
  protected:
  float Result ;
  public:
  void getData ()
  {
    Test::getData();
    Sport::getData();
  }
  void showData()
  {
    Test::showData();
    Sport::showData();
    cout<<"Result :"<< Math+Eng+Score <<endl;
  }
};
int main()
{
    Result r1 ;
    r1.getData();
    r1.showData();
    return 0;
}