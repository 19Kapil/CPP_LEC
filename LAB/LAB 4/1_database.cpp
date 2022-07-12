

#include<iostream>
using namespace std ;
class staff 
{   
    protected:
    int code ;
    char name [30] ;
    public :
    void getData()
    {
        cout <<"Enter the code of the staff :"<<endl;
        cin>>code;
        cout<<"Enter the name :";
        cin>>name;
    }
    void showData ()
    {   
        cout <<"Code :"<<code<<endl;
        cout <<"Name :"<<name<<endl;
    }
};
class Teacher : public staff 
{
    protected:
    char subject[20];
    char publication[20];
    public :
    void getData()
    {   
        cout<<"TEACHER"<<endl;
        staff::getData();
        cout<<"Enter the subject :"<<endl;
        cin>>subject;
        cout<<"Enter the publication of the book used:"<<endl;
        cin>>publication;
        
    }
    void showData ()
    {   
        cout<<"TEACHER"<<endl;
        staff::showData();
        cout<<"Subject :"<<subject<<endl;
        cout<<"Publication of the book used :"<<publication<<endl;

    }
};
class Officer : public staff 
{   
    protected:
    char grade[30] ;
    public:
    void getData()
    {   
        cout<<"OFFICER"<<endl;
        staff::getData();
        cout<<"Enter the grade:"<<endl;
        cin>>grade;
    }
    void showData()
    {   
        cout<<"OFFICER"<<endl;
        staff::showData();
        cout<<"The grade is "<<grade<<endl;
    }
};
class Typist : public staff 
{
    protected:
    int speed ;
    void getData ()
    {    cout<<"TYPIST"<<endl;
        staff::getData();
        cout<<"Enter the speed in wpm: "<<endl;
        cin>>speed;
    }
    void showData ()
    {   cout<<"TYPIST"<<endl;
        staff::showData();
        cout<<"Typing speed in wpm: "<<speed<<endl;
    }
};
class Casual : public Typist
{
    protected:
    float wages;
    public:
    void getData()
    {   
        cout<<" CASUAL TYPIST"<<endl;
        Typist::getData();
        cout<<"Enter daily wages :"<<endl;
        cin>>wages;
    }
    void showData()
    {   
        cout<<" CASUAL TYPIST"<<endl;
        Typist::showData();
        cout<<"Daily wages:"<<wages<<endl;
    }
};
class Regular : public Typist 
{
     protected:
    float wages ;
    public:
    void getData()
    {   
        cout<<"REGULAR TYPIST"<<endl;
        Typist::getData();
        cout<<"Enter daily wages :"<<endl;
        cin>>wages;
    }
    void showData()
    {   
        cout<<"REGULAT TYPIST"<<endl;
        Typist::showData();
        cout<<"wages:"<<wages<<endl;
    }
};
int main ()
{
    Teacher objT;
    Officer objO;
    Regular objR;
    Casual objC;
     objT.getData();
     objO.getData();
     objR.getData();
     objC.getData();
     objT.showData();
     objO.showData();
     objR.showData();
     objC.showData();


}
