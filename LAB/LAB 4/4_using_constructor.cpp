#include<iostream>
using namespace std ;
class Person 
{
    protected :
    char name [30];
    int code ;
    public :
    Person()
    {   
        cout<<"Enter the data "<<endl;
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
        cout<<"------------------Update Data---------------------"<<endl;
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
    account()
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
    admin()
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
    public:
    void showData ()
    {   
        cout<<"---------------Showing Data----------------"<<endl;
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
    cout<<"Do you want to update data press 1 if yes : "<<endl;
    cin>>x;
    if (x == 1 ){
    m1.updateData();
    }
    else 
    m1.showData();
    return 0;
}