#include <iostream>
using namespace std;
class Parent{

public:
    int id_protected;
};
class child : public Parent
{
    public:
    void setId(int id){
    id_protected = id;
    }

void dispalyId(){
    cout<< "id_protected is: "<<id_protected<<endl;

}

};
int main(){
    child obj1;
    obj1.setId(81);
    obj1.dispalyId();
    return 0;
}