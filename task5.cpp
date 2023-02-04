#include<iostream>
using namespace std;
main()
{
   
    
     string character[4];
     int lenght;
     for(int idx=0;idx<4;idx++)
       {
        cout<<"enter the"<<idx+1<<" element of array:";
        cin>>character[idx];
       }
       if ((character[0]==character[1])&&(character[1]==character[2])&&(character[2]==character[3]))
        {
         cout<<"true";
        }
        else 
        {
         cout<<"false";
        }
     
}
   