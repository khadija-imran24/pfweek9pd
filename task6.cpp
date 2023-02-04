#include<iostream>
using namespace std;
main()
{
    int size;
    
    int transform;
    int number[size];
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter the number of transformation you want:";
    cin>>transform;
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter number:";
        cin>>number[idx];
         for(int i=1;i<=transform;i++)
         {
            if(number[idx]%2!=0)
            {
                number[idx]=number[idx]+2;
            }
            else
            {
                 number[idx]=number[idx]-2;
            }
         }
    }
    cout<<"[";
    cout<<number[0];
    for(int idx=1;idx<size;idx++)
    {
        cout<<",";
      cout<<number[idx] ; 
    }
    cout<<"]";
}
   