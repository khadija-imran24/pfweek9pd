#include<iostream>
using namespace std;
main()
{
   string name;
   int idx=0;
   string movie[5]={"gladiator","starWars","terminators","takingLives","tomRider"}; 
   float price=500;
   cout<<"enter the name of movie:";
   cin>>name;
  
   for(int idx=0;idx<5;idx++)
   {

   if(movie[idx]==name)
   {
    if(idx%2==0)
    {
        price=price-(price*0.10);
        cout<<"total is :"<<price;
    }
    else
    {
         price=price-(price*0.05);
        cout<<"total is :"<<price;
    }

   }
   }


}