#include <iostream>
using namespace std;
class account{
    public:
    float salary=50000;

};
class programmer : public account
{
    public:
    float bonus = 15000;
};
int main(){
    programmer s1;
    cout <<"salary is : "<<s1.salary<<endl;
    cout << "bonus is "<<s1.bonus<<endl;
    cout<<"total earning is: "<<s1.salary+s1.bonus<<endl;
    return 0;
}