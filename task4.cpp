#include<iostream>
using namespace std;
main()
{
      
     bool  isfound=false;
    int size;
    cout<<"enter the size:";
    cin>>size;
    int number[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter a number:";
        cin>>number[idx];
        while(number[idx]!=0)
        {
            int num;
            num= number[idx]%10;
        if(num==7)
        {
            isfound=true;
        }
        number[idx]=number[idx]/10;
        }
    }
    if (isfound==true)
    {
        cout<<"boom!";
    }
    else 
    {
       cout<<"there is no 7 in the array" ; 
    }

}
      
        
