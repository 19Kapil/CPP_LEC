//item.cpp
#include<iostream>
using namespace std;
class iteminfo
 {
     private:
     int itemid;
     float cost;
   public:
   void setdata(int it,float cst)
   {
       itemid=it;
       cost=cst;
   }
   void showdata()
   {
       cout<<"\nitem id: "<<itemid;
       cout<<"\ncost :"<<cost<<endl;

   }
 };
 int main()
 {
iteminfo i1,i2;
i1.setdata(55,35.50);
i2.setdata(555,135.25);

cout<<"\nInformation on first item";
i1.showdata();

cout<<"\nInformationon second item";
i2.showdata();
return 0;

 }
