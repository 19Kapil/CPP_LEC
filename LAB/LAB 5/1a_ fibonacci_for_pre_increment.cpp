#include<iostream>
using namespace std;
class Fibonacci
{
    private:
    int x;
    int y;
    public:
    Fibonacci()
    {
        x = 0 ;
        y = 1 ;
    }
    void operator ++()
    {
      int temp ;
      temp = y;
      y = x + y;
      x = temp;
    }
    void showData()
    {
        cout<<y<<"\t";
    }

};
int main()
{
    Fibonacci obj1;
    int n;
    cout<<"Enter the number of terms required in the series "<<endl;
    cin>>n;
    cout<<"Fibonacci series"<<endl;
    cout<<"0"<<"\t";
    for(int i=0;i<n-1;i++)
    {
         ++obj1;
         obj1.showData();
    }
    
}
