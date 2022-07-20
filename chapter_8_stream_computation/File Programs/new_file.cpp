#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;

    file.open("new file.txt", ios::out);

    if (!file)
    {
        cout<<"Error in creating file!!";
    }
    cout<<"File created successfully";
    file.close();
    return 0;
}