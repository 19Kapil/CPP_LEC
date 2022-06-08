//2.	WAP to define the class in c++ as shown in the class diagram

//Student
//name
//roll
//address 
//percentage
//input()
//display()

//[-input(): to input initial values 
//-display(): to display the record of students who passed 
//NB: 45% is pass percentage]

#include <iostream>
using namespace std;
class student {
private:
char name[30];
int roll;
char address[50];
float percentage;
public:
void input()
{
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter roll no: ";
    cin>>roll;
    cout<<"enter address: ";
    cin>>address;
    cout<<"enter percentage: ";
    cin>>percentage;
}
void display()
{
    if (percentage > 45){
        cout<<"pass:\n"<<"\t"<<name<<"\t"<<roll<<"\t"<<address<<endl;
    }
    else {
        cout<<"fail:\n"<<"\t"<<name<<"\t"<<roll<<"\t"<<address<<endl;
    }

}
};

int main(){
    int n, i;
    student s[n];
    cout<<"total no. of student: ";
    cin>>n;
    for (i=1;i<=n;i++){

        s[i].input();
    }
      for(i=1;i<=n;i++)
    {
       s[i].display();
    }
    return 0;
}
