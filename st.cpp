//	1.	WAP in c++ to calculate simple interest from given principle time and rate. Set the rate to 15% as default argument when rate is not provided.
//[Hint: function prototype float interest(float principle, int time, float rate=0.15)]

#include <iostream>
using namespace std;

float interest(float principle, int time, float rate)
{
float simple_interest;
  simple_interest = (principle*time*rate)/100;
return simple_interest;
}

int main(){

float principle;
int time;
float rate=0.15;
float simple_interest;
cout<<"enter the principle:";
cin>>principle;
cout<<"enter the time:";
cin>>time;
cout<<"rate is : 0.15"<<endl;
simple_interest=interest(principle,time,rate);

cout<<"Required amount of simple interest is :"<<simple_interest<<endl;

return 0;



}