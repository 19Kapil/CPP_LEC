#include <iostream>
using namespace std;
class student{
    public:
    int marks;
    
    student (int m){
        marks = m;
    }
};
void calculateAverage(student s1,student s2){
    int average = (s1.marks + s2.marks) / 2;
    cout<<"the average of two students is :"<<average<<endl;  
}
int main()
{
   student s1(40),s2(24);
   calculateAverage( s1, s2);
   return 0;
}