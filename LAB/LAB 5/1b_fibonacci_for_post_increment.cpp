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
    void operator ++(int)
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
<<<<<<< HEAD
=======

>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
int main()
{
    Fibonacci obj1;
    int n;
    cout<<"Enter the number of terms required in the series "<<endl;
    cin>>n;
    cout<<"Fibonacci series"<<endl;
    cout<<"0"<<" ";
    for(int i=0;i<n-1;i++)
    {
         obj1++;
         obj1.showData();
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 371084be2ef2aa1ea9a78f887597c2a0f721f87e
