#include<iostream>
using namespace std;
main()
{
    int kg;
    string name;
   string fruit[4]={"peach","apple","guava","watermelon"}; 
   int price[4]={60,70,40,30};
   cout<<"enter the name of fruit:";
   cin>>name;
   cout<<"enter kgs of fruit";
   cin>>kg;
   for(int idx=0;idx<4;idx++)
   {
    if(fruit[idx]==name)
    {
        price[idx]=price[idx]*kg;
        cout<<"total is :"<<price[idx];
    }
   }


}