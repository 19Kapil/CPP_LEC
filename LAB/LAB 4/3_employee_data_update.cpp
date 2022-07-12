#include<iostream>
using namespace std ;
class Person 
{
    protected :
    char name [30];
    int code ;
    public :
    void getData()
    {
        cout<<"Enter the name :"<<endl;
        cin >> name ;
        cout<<"Enter the code :"<<endl;
        cin >> code;
    }
    void showData()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Code :"<<code<<endl;
    }
    void updateData()
    {   
        cout<<"-------Update Data---------"<<endl;
        cout<<"Enter the name :"<<endl;
        cin >> name ;
        cout<<"Enter the code :"<<endl;
        cin >> code;
    }
    
};
class account : public virtual Person
{
    protected :
    float pay ;
    int status;
    public :
    void getData()
    {
        cout<<"Enter the payment :"<<endl;
        cin >> pay;
    }
    void showData()
    {   
       cout<<"Payment : "<<pay<<endl;
    }
    void updateData()
    {   
       cout<<"Enter the payment :"<<endl;
        cin >> pay;
    }
};
class admin : public virtual Person
{
    protected :
    float experience ;
    public :
    void getData()
    {
        cout<<"Enter your experience in years:"<<endl;
        cin >> experience;
    }
    void showData()
    {   
        cout<<"Experience :"<<experience<<endl;
    }
 void updateData()
    {   
        cout<<"Enter your experience in years:"<<endl;
        cin >> experience;
    }
};
class Master : public admin , account 
{
    public :
    void getData ()
    {
        Person::getData();
        admin::getData();
        account::getData();
    }
    void showData ()
    {
        Person::showData();
        admin::showData();
        account::showData();
    }
    void updateData()
    {   
        Person::updateData();
        admin::updateData();
        account::updateData();
    }
};
int main ()
{
    Master m1;
    int x;
    cout<<"Enter the data "<<endl;
    m1.getData();
    cout<<"Do you want to update data press 1 if yes : "<<endl;
    cin>>x;
    if (x =1 ){
    m1.updateData();
    }
    m1.showData();
    return 0;
    
}
